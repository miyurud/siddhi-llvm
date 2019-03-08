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
antlrcpp::Any TranslatorVisitor::visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) {
    std :: cout << "\nvisit app annotation. \n";
    TranslatorVisitor :: app_annotationContext = ctx;
    if(ctx->name()->id()->getText() == "name"){
        TranslatorVisitor :: appName =  app_annotationContext->annotation_element(0)
                ->property_value()->string_value()->getText() ;
    }
    return 0;


}


antlrcpp::Any TranslatorVisitor::visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) {
    std :: cout << "\nvisit siddhi app. \n";
    return visitChildren(ctx);
}

antlrcpp::Any TranslatorVisitor :: visitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx){
    std :: cout << "\nvisit visitDefinition_stream. \n" << "annotation : " << ctx->annotation().size();
    DefinitionStream definitionStream;
    if(ctx->annotation().size() > 0){
        definitionStream.setAnnotation(createAnnotation(ctx->annotation(0)));
    }
    definitionStream.setSource(ctx->source()->stream_id()->name()->id()->getText());
    for (int i = 0; i < ctx->attribute_name().size(); i++) {
        std::cout << ctx->attribute_name(i)->getText() << "\n";
        definitionStream.addParam(ctx->attribute_name(i)->getText(),ctx->attribute_type(i)->getText());
    }

    definitionStreams.push_back(definitionStream);
    return 0;
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