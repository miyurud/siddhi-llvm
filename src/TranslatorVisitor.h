//
// Created by tharsanan on 2/1/19.
//

#ifndef STREAM_PROCESSOR_TRANSLATORVISITOR_H
#define STREAM_PROCESSOR_TRANSLATORVISITOR_H
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"
#include "SiddhiqlBaseVisitor.h"
#include "DefinitionStream.h"
#include "ExecutionElement.h"
class TranslatorVisitor : SiddhiqlBaseVisitor{
public:
    virtual antlrcpp::Any visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) override;
    virtual antlrcpp::Any visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) override;
    virtual antlrcpp::Any visitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx) override;
    virtual antlrcpp::Any visitExecution_element(SiddhiqlParser::Execution_elementContext *ctx) override;

    SiddhiqlParser::App_annotationContext *app_annotationContext;
    std :: string appName;
    std :: vector<DefinitionStream> definitionStreams;
    ExecutionElement executionElement;
    Annotation createAnnotation(SiddhiqlParser::AnnotationContext *ctx );
};


#endif //STREAM_PROCESSOR_TRANSLATORVISITOR_H
