//
// Created by tharsanan on 2/1/19.
//

#ifndef STREAM_PROCESSOR_TRANSLATORVISITOR_H
#define STREAM_PROCESSOR_TRANSLATORVISITOR_H
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"
#include "SiddhiqlBaseVisitor.h"
#include "DefinitionStream.h"
class TranslatorVisitor : SiddhiqlBaseVisitor{
public:
    virtual antlrcpp::Any visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) override;
    virtual antlrcpp::Any visitName(SiddhiqlParser::NameContext *ctx) override;
    virtual antlrcpp::Any visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) override;
    virtual antlrcpp::Any visitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx) override;
    SiddhiqlParser::App_annotationContext *app_annotationContext;
    std :: string appName;
    std :: string querySourceName;
    std :: list<DefinitionStream> definitionStreams;
};


#endif //STREAM_PROCESSOR_TRANSLATORVISITOR_H
