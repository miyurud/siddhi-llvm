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
