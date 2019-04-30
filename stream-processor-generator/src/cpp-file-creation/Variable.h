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

#ifndef STREAM_PROCESSOR_VARIABLE_H
#define STREAM_PROCESSOR_VARIABLE_H

#include <string>
#include <vector>

using namespace std;
class Variable {
public:
    Variable();
    bool shoulInit;
    string initValue;
    bool isStatic;
    string dataType;
    string identifier;
    vector<string> lines;
    void setIdentifier(string s);
};


#endif //STREAM_PROCESSOR_VARIABLE_H
