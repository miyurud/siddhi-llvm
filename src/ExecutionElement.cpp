/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

//
// Created by tharsanan on 2/19/19.
//

#include <SiddhiqlParser.h>
#include "ExecutionElement.h"
#include "TranslatorVisitor.h"
#include "FileReader.h"

void ExecutionElement::setAnnotation(Annotation annotation1){
    annotation = annotation1;
}

Annotation ExecutionElement::getAnnotation(){
    return annotation;
}

void ExecutionElement::setInputSourceName(string inName){
    inputSourceName = inName;
}

string ExecutionElement::getInputSourceName(){
    return inputSourceName;
}

string ExecutionElement::getOutputSourceName() {
    return outputSourceName;
}

void ExecutionElement::setOutputSourceName(string outName) {
    outputSourceName = outName;
}

void ExecutionElement::prepareExecutionElement(Annotation annotation1, SiddhiqlParser::QueryContext *ctx){
    executionHeader.className = "Execution";
    annotation = annotation1;
    executeQuery_input(ctx->query_input());
    executeQuery_output(ctx->query_output());
    executeQuery_section(ctx->query_section());
    executionHeader.createHeaderSource();
    executionHeader.createCppSource();

}

void ExecutionElement::executeQuery_input(SiddhiqlParser::Query_inputContext *ctx){
    if(ctx->standard_stream()){
        inputSourceName = ctx->standard_stream()->source()->stream_id()->name()->id()->getText();
        for (int i = 0; i < TranslatorVisitor::definitionStreams.size(); i++) {
            if(TranslatorVisitor::definitionStreams[i].getSource() == inputSourceName){
                TranslatorVisitor::definitionStreams[i].isInputSource = true;
                FileReader fileReader;
                fileReader.createFile(inputSourceName);
            }
        }
    }
    // need to implement methods for other input types like anonymous types

}

void ExecutionElement::executeQuery_output(SiddhiqlParser::Query_outputContext *ctx){
    if(ctx->INSERT()){
        setOutputSourceName(ctx->target()->source()->stream_id()->name()->id()->getText());
        for (int i = 0; i < TranslatorVisitor::definitionStreams.size(); i++) {
            if(TranslatorVisitor::definitionStreams[i].getSource() == outputSourceName){
                TranslatorVisitor::definitionStreams[i].isOutputSource = true;
            }
        }
    }
}

void ExecutionElement::executeQuery_section(SiddhiqlParser::Query_sectionContext *ctx){
    Method methodForSetReference;
    Variable inVariable;
    inVariable.setIdentifier("inputSource");
    inVariable.dataType = inputSourceName;
    Variable outVariable;
    outVariable.identifier = "outputSource";
    outVariable.dataType = outputSourceName;
    executionHeader.publicMembers.publicVariables.push_back(inVariable);
    executionHeader.publicMembers.publicVariables.push_back(outVariable);
    methodForSetReference.returnType = "void";
    methodForSetReference.identifier = "execute";
    for (int i = 0; i < ctx->output_attribute().size(); i++) {
        if(ctx->output_attribute(i)->attribute_reference()){
            string referenceName =
                    ctx->output_attribute(i)->attribute_reference()->attribute_name()->name()->id()->getText();
            referenceName[0] = toupper(referenceName[0]);
            methodForSetReference.addLine("\toutputSource.set" + referenceName + "(" + "inputSource.get" + referenceName + ");");
            Method method;
            method.returnType = "void";
            string attributeReferenceCap = ctx->output_attribute(i)->attribute_reference()->attribute_name()->name()->id()->getText();
            attributeReferenceCap[0] = toupper(attributeReferenceCap[0]);
            method.identifier = "setInputSource" + attributeReferenceCap;
            string returnType = "";
            for (int j = 0; j < TranslatorVisitor::definitionStreams.size(); j++) {
                if(TranslatorVisitor::definitionStreams[j].parameters.find(ctx->output_attribute(i)
                ->attribute_reference()->attribute_name()->name()->id()->getText())!=TranslatorVisitor::definitionStreams[j].parameters.end()){
                    string string1 = TranslatorVisitor::definitionStreams[j].parameters.find(ctx->output_attribute(i)
                            ->attribute_reference()->attribute_name()->name()->id()->getText())->second;
                    returnType = string1;
                }
            }
            string attributeReferenceLow = attributeReferenceCap;
            attributeReferenceLow[0] = tolower(attributeReferenceCap[0]);
            method.params.insert(pair<string,string>(attributeReferenceLow + "M",returnType));
            method.addLine("\tinputSource.set" + attributeReferenceCap + "(" + attributeReferenceLow + "M" + ");");
            method.addLine("\texecute();");
            executionHeader.publicMembers.publicMethods.push_back(method);
            created_attribute_refs.push_back(attributeReferenceLow);
        }
        else{
            string returnType = "";
            for (int j = 0; j < TranslatorVisitor::definitionStreams.size(); j++) {
                if(TranslatorVisitor::definitionStreams[j].parameters.find(ctx->output_attribute(i)->attribute_name()
                ->name()->id()->getText())!=TranslatorVisitor::definitionStreams[j].parameters.end()){
                    string string1 = TranslatorVisitor::definitionStreams[j].parameters.find(ctx->output_attribute(i)
                            ->attribute_name()->name()->id()->getText())->second;
                    returnType = string1;
                }
            }
            string methodName = resolveMathOperation(ctx->output_attribute(i)->attribute()->math_operation(), i, 0, returnType);
            string attributeName = ctx->output_attribute(i)->attribute_name()->name()->id()->getText();
            attributeName[0] = toupper(attributeName[0]);
            methodForSetReference.addLine("\toutputSourceName.set" + attributeName + "(" + methodName + ");");
        }
    }
    executionHeader.publicMembers.publicMethods.push_back(methodForSetReference);
}

string ExecutionElement::resolveMathOperation(SiddhiqlParser::Math_operationContext *ctx, int i, int count, string returnType){
    if(ctx->function_operation()) {
        Method method;
        method.identifier = ctx->function_operation()->function_id()->name()->id()->getText() + "_" + to_string(i) + "_"
                            + to_string(count);
        count += 1;
        method.returnType = returnType;
        method.addLine("\n" + FunctionCreation::createMethodLineForFunction(
                ctx->function_operation()->function_id()->getText(),
                ctx->function_operation()->attribute_list()[0].getText()));

//        for (int j = 0; j < ctx->function_operation()->attribute_list()->attribute().size(); j++) {
//            if(ctx->function_operation()->attribute_list()->attribute()[j]->math_operation()){
//                method.addLine("return " + resolveMathOperation(ctx->function_operation()->attribute_list()->attribute()[j]->math_operation(),i,
//                        count, returnType) + ";");
//            }
//        }
        if (std::find(created_attribute_refs.begin(), created_attribute_refs.end(), ctx->function_operation()->attribute_list()[0].getText()) == created_attribute_refs.end()) {
            Method method1;
            method1.returnType = "void";
            string attributeReferenceCap = ctx->function_operation()->attribute_list()[0].getText();
            attributeReferenceCap[0] = toupper(attributeReferenceCap[0]);
            method1.identifier = "setInputSource" + attributeReferenceCap;
            string returnType = "";
            for (int j = 0; j < TranslatorVisitor::definitionStreams.size(); j++) {
                if (TranslatorVisitor::definitionStreams[j].parameters.find(ctx->function_operation()
                                                                                    ->attribute_list()[0].getText()) !=
                    TranslatorVisitor::definitionStreams[j].parameters.end()) {
                    string string1 = TranslatorVisitor::definitionStreams[j].parameters.find(
                            ctx->function_operation()->attribute_list()[0].getText())->second;
                    returnType = string1;
                }
            }
            string attributeReferenceLow = attributeReferenceCap;
            attributeReferenceLow[0] = tolower(attributeReferenceCap[0]);
            method1.params.insert(pair<string, string>(attributeReferenceLow + "M", returnType));
            method1.addLine(
                    "\tinputSource.set" + attributeReferenceCap + "(" + attributeReferenceLow + "M" +
                    ");");
            method1.addLine("\texecute();");
            executionHeader.publicMembers.publicMethods.push_back(method1);
        }


        executionHeader.publicMembers.publicMethods.push_back(method);
        return method.identifier + "()";
    }
}
