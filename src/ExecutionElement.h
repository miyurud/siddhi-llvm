//
// Created by tharsanan on 2/19/19.
//

#ifndef STREAM_PROCESSOR_EXECUTIONELEMENT_H
#define STREAM_PROCESSOR_EXECUTIONELEMENT_H


#include "Annotation.h"

class ExecutionElement {
public:
    Annotation annotation;
    void setAnnotation(Annotation annotation1);
    void setInputName(string inName);
    void prepareExecutionElement(Annotation annotation1, SiddhiqlParser::QueryContext *ctx);
    void executeQuery_input(SiddhiqlParser::Query_inputContext *ctx);
    void executeQuery_output(SiddhiqlParser::Query_outputContext *ctx);
    void executeQuery_section(SiddhiqlParser::Query_sectionContext *ctx);
    string getName();
    Annotation getAnnotation();
    string inputName;
};


#endif //STREAM_PROCESSOR_EXECUTIONELEMENT_H
