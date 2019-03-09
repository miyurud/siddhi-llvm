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

#include "Method.h"

Method Method::createSetterMethod(string variableName, string variableType){
    Method method;
    method.returnType = "void";
    string methodName = variableName;
    methodName[0] = toupper(methodName[0]);
    method.identifier = "set"+methodName;
    method.params.insert(pair<string,string>(variableType,variableName+"M"));
    return method;
}

Method Method::createGetterMethod(string variableName,string variableType){
    Method method;
    method.returnType = variableType;
    string methodName = variableName;
    methodName[0] = toupper(methodName[0]);
    method.identifier = "get"+methodName;
    return method;
}