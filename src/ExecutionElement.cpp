//
// Created by tharsanan on 2/19/19.
//

#include <SiddhiqlParser.h>
#include "ExecutionElement.h"
void ExecutionElement::setAnnotation(Annotation annotation1){
    annotation = annotation1;
}

Annotation ExecutionElement::getAnnotation(){
    return annotation;
}

void ExecutionElement::setInputName(string inName){
    inputName = inName;
}

string ExecutionElement::getName(){
    return inputName;
}

void ExecutionElement::prepareExecutionElement(Annotation annotation1, SiddhiqlParser::QueryContext *ctx){
    annotation = annotation1;
    executeQuery_input(ctx->query_input());
    executeQuery_output(ctx->query_output());
    executeQuery_section(ctx->query_section());
}

void ExecutionElement::executeQuery_input(SiddhiqlParser::Query_inputContext *ctx){
    if(ctx->standard_stream()){
        inputName = ctx->standard_stream()->source()->stream_id()->name()->id()->getText();
    }
    // need to implement methods for other input types like anonymous types

}

void ExecutionElement::executeQuery_output(SiddhiqlParser::Query_outputContext *ctx){
    if(ctx->INSERT()){
        std::cout << "\n\n\ninsert\n";
    }
}

void ExecutionElement::executeQuery_section(SiddhiqlParser::Query_sectionContext *ctx){

}

