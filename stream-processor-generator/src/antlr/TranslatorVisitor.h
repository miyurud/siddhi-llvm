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

#ifndef STREAM_PROCESSOR_TRANSLATORVISITOR_H
#define STREAM_PROCESSOR_TRANSLATORVISITOR_H
#include "SiddhiqlParser.h"
#include "SiddhiqlBaseListener.h"
#include "SiddhiqlBaseVisitor.h"
#include "query/DefinitionStream.h"
#include "query/ExecutionElement.h"
#include "query/AttributeTypeMapper.h"

class TranslatorVisitor : SiddhiqlBaseVisitor{
private:
    static InputOutputMapper* localInputOutputMapperTemp;
    static bool flagForAddIOMapperString;
    static int countIOMapper;
    static vector<InputOutputMapper> inputOutputMapperList;
    int definitionVisitCount;
public:
    virtual antlrcpp::Any visitApp_annotation(SiddhiqlParser::App_annotationContext *ctx) override;
    virtual antlrcpp::Any visitSiddhi_app(SiddhiqlParser::Siddhi_appContext *ctx) override;
    virtual antlrcpp::Any visitDefinition_stream(SiddhiqlParser::Definition_streamContext *ctx) override;
    virtual antlrcpp::Any visitExecution_element(SiddhiqlParser::Execution_elementContext *ctx) override;
    virtual antlrcpp::Any visitAttribute_name(SiddhiqlParser::Attribute_nameContext *ctx) override;
    virtual antlrcpp::Any visitAs(SiddhiqlParser::AsContext *ctx) override;
    virtual antlrcpp::Any visitComma(SiddhiqlParser::CommaContext *context) override;
    virtual antlrcpp::Any visitOutput_attribute(SiddhiqlParser::Output_attributeContext *context) override;

    TranslatorVisitor();
    static InputOutputMapper* getInputOutputMapperFromList(int index);
    static vector<InputOutputMapper> getInputOutputMapperList();
    static void addInputOutputMapperInList(InputOutputMapper obj);
    static void setLocalInputOutputMapperTemp(InputOutputMapper* ctx);
    static void setFlagForAddIOMapperString(bool value);
    static void addDependentStringToInputOutputMapper(string value);
    SiddhiqlParser::App_annotationContext *app_annotationContext;
    std :: string appName;
    static vector<DefinitionStream> definitionStreams;
    ExecutionElement executionElement;
    Annotation createAnnotation(SiddhiqlParser::AnnotationContext *ctx );
    static vector<string> commonIncludes;
};


#endif //STREAM_PROCESSOR_TRANSLATORVISITOR_H
