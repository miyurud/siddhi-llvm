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

#include <iostream>
#include "DefinitionStream.h"
using std::string;


void DefinitionStream::addParam(string name, string type) {
    parameters.insert(std::pair<string, string>(name,type));
    Variable variable;
    variable.identifier = name;
    variable.dataType = type;
    classCreator.publicMembers.publicVariables.push_back(variable);
    classCreator.publicMembers.publicMethods.push_back(Method::createGetterMethod(name,type));
    classCreator.publicMembers.publicMethods.push_back(Method::createSetterMethod(name,type));

}

std::map<string, string> DefinitionStream::getParameters() {
    return parameters;
}

Annotation DefinitionStream::getAnnotation() {
    return annotation;
}

void DefinitionStream::setAnnotation(Annotation annotationM) {
    annotation = annotationM;
}

string DefinitionStream::getSource() {
    return source;
}

void DefinitionStream::setSource(string sourceM) {
    source = sourceM;
    classCreator.className = sourceM;
}

void DefinitionStream::finalizeDefinitionStream(){
    string ss = classCreator.createHeaderSource();
    std::cout << ss;
}