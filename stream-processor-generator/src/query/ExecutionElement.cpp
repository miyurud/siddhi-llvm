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

#include <SiddhiqlParser.h>
#include <stream-processor-generator/src/antlr/TranslatorVisitor.h>
#include "ExecutionElement.h"

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
    executeQuery_section(ctx->query_section());
}

void ExecutionElement::executeQuery_input(SiddhiqlParser::Query_inputContext *ctx){

}

void ExecutionElement::executeQuery_output(SiddhiqlParser::Query_outputContext *ctx){

}

void ExecutionElement::executeQuery_section(SiddhiqlParser::Query_sectionContext *ctx){
    createIOMapper(ctx);
}

void ExecutionElement::createIOMapper(SiddhiqlParser::Query_sectionContext *ctx){
    for (int i = 0; i < ctx->output_attribute().size(); ++i) {
        InputOutputMapper inputOutputMapper;
        if(ctx->output_attribute(i)->attribute_reference()){ //just a pass through.
            inputOutputMapper.addLogicPart(ctx->output_attribute(i)->attribute_reference()->getText());
            inputOutputMapper.setOutput(ctx->output_attribute(i)->attribute_reference()->getText());
        }
        else{  // can be a math function.
            prepareLogicParts(&inputOutputMapper, ctx->output_attribute(i)->attribute());
            inputOutputMapper.setOutput(ctx->output_attribute(i)->attribute_name()->getText());
        }
        TranslatorVisitor::addInputOutputMapperInList(inputOutputMapper);
    }
}

string ExecutionElement::resolveMathOperation(SiddhiqlParser::Math_operationContext *ctx, int i
        , int count, string returnType){

}

void ExecutionElement::prepareLogicParts(InputOutputMapper* inputOutputMapper, SiddhiqlParser::AttributeContext *ctx) {
    vector<antlr4::tree::ParseTree*> nodes_to_visit = ctx->children;
    while(nodes_to_visit.size() != 0) {
        antlr4::tree::ParseTree* currentnode = nodes_to_visit.front();
        nodes_to_visit.erase(nodes_to_visit.begin());
        if(currentnode->children.size() == 0) {
            inputOutputMapper->addLogicPart(currentnode->getText());
        }
        else{
            nodes_to_visit.insert(nodes_to_visit.begin(), currentnode->children.begin(), currentnode->children.end());
        }
    }
    //do something
}
