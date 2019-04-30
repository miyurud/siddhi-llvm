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
// Created by tharsanan on 4/10/19.
//

#ifndef STREAM_PROCESSOR_TEST_H
#define STREAM_PROCESSOR_TEST_H


#include <string>
#include "vector"

using namespace std;

class InputOutputMapper {
private:
    vector<string> dependOnList;
    string output;
    vector<string> logicParts;
public:
    void addToDependOn(string input);
    vector<string> getDependList();
    void setOutput(string outputM);
    string getOutput();
    void addLogicPart(string logicM);
    string getLogicString();
    bool contains(string* ptr, string value, int len);
    std::string makeFirstCapital(std::string s);
};


#endif //STREAM_PROCESSOR_TEST_H
