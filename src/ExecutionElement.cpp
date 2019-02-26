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
    annotation = annotation1;
    executeQuery_input(ctx->query_input());
    executeQuery_output(ctx->query_output());
    executeQuery_section(ctx->query_section());
}

void ExecutionElement::executeQuery_input(SiddhiqlParser::Query_inputContext *ctx){
    if(ctx->standard_stream()){
        inputSourceName = ctx->standard_stream()->source()->stream_id()->name()->id()->getText();
    }
    // need to implement methods for other input types like anonymous types

}

void ExecutionElement::executeQuery_output(SiddhiqlParser::Query_outputContext *ctx){
    if(ctx->INSERT()){
        setOutputSourceName(ctx->target()->source()->stream_id()->name()->id()->getText());
    }
}

void ExecutionElement::executeQuery_section(SiddhiqlParser::Query_sectionContext *ctx){
    for (int i = 0; i < ctx->output_attribute().size(); ++i) {

    }
}

