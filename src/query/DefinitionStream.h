//
// Created by tharsanan on 2/2/19.
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

#ifndef STREAM_PROCESSOR_DEFINITIONSTREAM_H
#define STREAM_PROCESSOR_DEFINITIONSTREAM_H


#include <map>
#include <cpp-file-creation/ClassCreator.h>
#include "Annotation.h"
class DefinitionStream {

public:
    std::map<std::string, std::string> parameters;

    void addParam(std::string name, std::string type);

    std::map<std::string, std::string> getParameters() ;

    Annotation getAnnotation();

    void setAnnotation(Annotation annotationM);

    std::string getSource();

    void setSource(std::string sourceM);

    void finalizeDefinitionStream();

    ClassCreator classCreator;

    Annotation annotation;

    std::string source;

    bool isInputSource;

    bool isOutputSource;
};


#endif //STREAM_PROCESSOR_DEFINITIONSTREAM_H
