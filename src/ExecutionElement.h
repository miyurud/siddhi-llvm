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

#ifndef STREAM_PROCESSOR_EXECUTIONELEMENT_H
#define STREAM_PROCESSOR_EXECUTIONELEMENT_H


#include "Annotation.h"

class ExecutionElement {
public:
    Annotation annotation;
    void setAnnotation(Annotation annotation1);
    void setInputSourceName(string inName);
    void prepareExecutionElement(Annotation annotation1, SiddhiqlParser::QueryContext *ctx);
    void executeQuery_input(SiddhiqlParser::Query_inputContext *ctx);
    void executeQuery_output(SiddhiqlParser::Query_outputContext *ctx);
    void executeQuery_section(SiddhiqlParser::Query_sectionContext *ctx);
    void setOutputSourceName(string outName);
    string getInputSourceName();
    string getOutputSourceName();
    Annotation getAnnotation();
    string inputSourceName;
    string outputSourceName;
};


#endif //STREAM_PROCESSOR_EXECUTIONELEMENT_H
