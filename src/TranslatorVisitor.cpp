//
// Created by tharsanan on 2/1/19.
//

#include "TranslatorVisitor.h"
antlrcpp::Any TranslatorVisitor::visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) {
    std :: cout << "\nvisit app annotation. \n";
    TranslatorVisitor :: app_annotationContext = ctx;
    if(ctx->name()->id()->getText() == "name"){
        TranslatorVisitor :: appName =  app_annotationContext->annotation_element(0)->property_value()->string_value()->getText() ;
    }
    return 0;


}

//antlrcpp::Any TranslatorVisitor::visitName(SiddhiqlParser::NameContext *ctx) {
//    std :: cout << "\nvisit name. \n";
//
//    //return 0;
//    return 0;
//}

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
    if(ctx->query()->annotation().size() > 0){
        annotation = createAnnotation(ctx->query()->annotation(0));
        executionElement.prepareExecutionElement(annotation, ctx->query());
    }
    executionElement.prepareExecutionElement(annotation, ctx->query());
}

Annotation TranslatorVisitor::createAnnotation(SiddhiqlParser::AnnotationContext *ctx){
    Annotation annotation;
    annotation.setName(ctx->name()->getText());
    for (int i = 0; i < ctx->annotation_element().size(); i++) {
        annotation.addAnnotationElement(ctx->annotation_element(i)->property_name()->name(0)->id()->getText(), ctx->annotation_element(i)->property_value()->string_value()->getText());
    }
    return annotation;
}