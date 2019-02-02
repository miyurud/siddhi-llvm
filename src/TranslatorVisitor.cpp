//
// Created by tharsanan on 2/1/19.
//

#include "TranslatorVisitor.h"
antlrcpp::Any TranslatorVisitor::visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) {
    std :: cout << "\nvisit app annotation. \n";
    TranslatorVisitor :: app_annotationContext = ctx;
    return 0;


}

antlrcpp::Any TranslatorVisitor::visitName(SiddhiqlParser::NameContext *ctx) {
    std :: cout << "\nvisit name. \n";
    std :: cout << "visited name is : " << ctx->id()->getText() << "\n";
    if(ctx->id()->getText() == "name"){
        TranslatorVisitor :: appName =  app_annotationContext->annotation_element(0)->property_value()->string_value()->getText() ;
    }
    std :: cout << "\nApp name is : " << appName << "\n";
    //return 0;
    return 0;
}

antlrcpp::Any TranslatorVisitor::visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) {
    std :: cout << "\nvisit siddhi app. \n";
    return visitChildren(ctx);
}

antlrcpp::Any TranslatorVisitor :: visitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx){
    std :: cout << "\nvisit visitDefinition_stream. \n";
    return 0;
}