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
// Created by tharsanan on 2/23/19.
//

#ifndef STREAM_PROCESSOR_CLASSCREATOR_H
#define STREAM_PROCESSOR_CLASSCREATOR_H

#include "Include.h"
#include "PublicMembers.h"
#include <string>

using namespace std;

class ClassCreator {
public:
    Include include;
    PublicMembers publicMembers;
    string headerSrc;
    string cppSrc;
    string className;
    vector<string> lines;
    void prepareIncludeLines();
    void preparePublicMethodLines();
    void preparePublicVariableLines();
    string createHeaderSource();
    string createCppSource();
    void createHeaderFile();
    void createCppFile();
};


#endif //STREAM_PROCESSOR_CLASSCREATOR_H
