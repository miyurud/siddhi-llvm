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

#ifndef STREAM_PROCESSOR_METHOD_H
#define STREAM_PROCESSOR_METHOD_H

#include <string>
#include <vector>
#include <map>

using namespace std;
class Method {
public:
    string returnType;
    string identifier;
    map<string,string> params;
    vector<string> lines;
    static Method createSetterMethod(string variableName,  string variableType);
    static Method createGetterMethod(string variableName, string variableType);
    void addSetterLines(string variableName);
    void addGetterLines(string variableName);
    void addLine(string line);
};


#endif //STREAM_PROCESSOR_METHOD_H
