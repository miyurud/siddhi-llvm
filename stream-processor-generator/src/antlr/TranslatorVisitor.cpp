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

#include "TranslatorVisitor.h"

std :: vector<DefinitionStream> TranslatorVisitor::definitionStreams;
std ::  vector<string> TranslatorVisitor::commonIncludes;

bool TranslatorVisitor::flagForAddIOMapperString = false;
InputOutputMapper* TranslatorVisitor::localInputOutputMapperTemp = nullptr;
int TranslatorVisitor::countIOMapper = 0;
vector<InputOutputMapper> TranslatorVisitor::inputOutputMapperList;

TranslatorVisitor::TranslatorVisitor(){
    definitionVisitCount = 0;
}

antlrcpp::Any TranslatorVisitor::visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) {
//    std :: cout << "\nvisit siddhi app. \n";
    return visitChildren(ctx);
}

antlrcpp::Any TranslatorVisitor::visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) {
    std :: cout << "\nvisit app annotation. \n";
    TranslatorVisitor :: app_annotationContext = ctx;
    if(ctx->name()->id()->getText() == "name"){
        TranslatorVisitor :: appName =  app_annotationContext->annotation_element(0)
                ->property_value()->string_value()->getText() ;
    }
    return visitChildren(ctx);
}


antlrcpp::Any TranslatorVisitor :: visitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx){
    definitionVisitCount++;
    for (int i = 0; i < ctx->attribute_name_type().size(); ++i) {
        if(definitionVisitCount == 1){
            AttributeTypeMapper::addToInputAttributeMap(ctx->attribute_name_type(i)->attribute_name()->getText(), ctx->attribute_name_type(i)->attribute_type()->getText());
            AttributeTypeMapper::addInputAttributeNameVector(ctx->attribute_name_type(i)->attribute_name()->getText());
        }
        else{
            AttributeTypeMapper::addToOutputAttributeMap(ctx->attribute_name_type(i)->attribute_name()->getText(), ctx->attribute_name_type(i)->attribute_type()->getText());
            AttributeTypeMapper::addOutputAttributeNameVector(ctx->attribute_name_type(i)->attribute_name()->getText());
        }
    }
    return visitChildren(ctx);
}

antlrcpp::Any TranslatorVisitor::visitExecution_element(SiddhiqlParser::Execution_elementContext *ctx){
    Annotation annotation;
    std::cout << "entering execution element";
    if(ctx->query()->annotation().size() > 0){
        annotation = createAnnotation(ctx->query()->annotation(0));
        executionElement.prepareExecutionElement(annotation, ctx->query());
    }
    else {
        executionElement.prepareExecutionElement(annotation, ctx->query());
    }
    return visitChildren(ctx);
}

Annotation TranslatorVisitor::createAnnotation(SiddhiqlParser::AnnotationContext *ctx){
    Annotation annotation;
    annotation.setName(ctx->name()->getText());
    for (int i = 0; i < ctx->annotation_element().size(); i++) {
        annotation.addAnnotationElement(ctx->annotation_element(i)
        ->property_name()->name(0)->id()->getText(), ctx->annotation_element(i)
        ->property_value()->string_value()->getText());
    }
    return annotation;
}

antlrcpp::Any TranslatorVisitor::visitAttribute_name(SiddhiqlParser::Attribute_nameContext *ctx) {
    if(flagForAddIOMapperString){
        addDependentStringToInputOutputMapper(ctx->getText());
    }
    return visitChildren(ctx);
}

antlrcpp::Any TranslatorVisitor::visitAs(SiddhiqlParser::AsContext *ctx) {
    if(flagForAddIOMapperString){
        countIOMapper++;
        setFlagForAddIOMapperString(false);
    }
    return visitChildren(ctx);
}

antlrcpp::Any TranslatorVisitor::visitComma(SiddhiqlParser::CommaContext *ctx) {
    if(flagForAddIOMapperString){
        countIOMapper++;
        setFlagForAddIOMapperString(false);
    }
    return visitChildren(ctx);
}

antlrcpp::Any TranslatorVisitor::visitOutput_attribute(SiddhiqlParser::Output_attributeContext *ctx) {
    setFlagForAddIOMapperString(true);
    setLocalInputOutputMapperTemp(&inputOutputMapperList[countIOMapper]);
    return visitChildren(ctx);
}


void TranslatorVisitor::addDependentStringToInputOutputMapper(string value){
    localInputOutputMapperTemp->addToDependOn(value);
}

void TranslatorVisitor::setLocalInputOutputMapperTemp(InputOutputMapper* ctx){
    localInputOutputMapperTemp = ctx;
}

void TranslatorVisitor::setFlagForAddIOMapperString(bool value){
    flagForAddIOMapperString = value;
}

InputOutputMapper* TranslatorVisitor::getInputOutputMapperFromList(int index){
    return &inputOutputMapperList[index];
}

void TranslatorVisitor::addInputOutputMapperInList(InputOutputMapper obj){
    inputOutputMapperList.push_back(obj);
}

vector<InputOutputMapper> TranslatorVisitor::getInputOutputMapperList(){
    return inputOutputMapperList;
}
