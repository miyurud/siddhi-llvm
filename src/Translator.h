//
// Created by tharsanan on 1/31/19.
//

#ifndef STREAM_PROCESSOR_TRANSLATOR_H
#define STREAM_PROCESSOR_TRANSLATOR_H
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"


class Translator  : public SiddhiqlBaseListener {
public:

    virtual void enterSiddhi_app(SiddhiqlParser::Siddhi_appContext * ) override;
    virtual void enterExecution_element(SiddhiqlParser::Execution_elementContext * /*ctx*/) override;
    virtual void enterApp_annotation(SiddhiqlParser::App_annotationContext * /*ctx*/) override;
};


#endif //STREAM_PROCESSOR_TRANSLATOR_H
