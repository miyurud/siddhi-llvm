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
// Created by tharsanan on 4/24/19.
//

#ifndef STREAM_PROCESSOR_ARITHMATICEXECUTORGENERATOR_H
#define STREAM_PROCESSOR_ARITHMATICEXECUTORGENERATOR_H

#include <stream-processor-generator/src/cpp-file-creation/Variable.h>
#include <stream-processor-generator/src/cpp-file-creation/Method.h>
#include "vector"

using namespace std;
class ArithmaticExecutorGenerator {
private:
    static vector<Variable> variables;
    static vector<Method> methods;
    static vector<string> includes;
public:
    static void addVariable(Variable variable);
    static void addMethod(Method method);
    static Method* getMethodForOutput(string output);
    static void create();
    static void addInclude(string include);
};


#endif //STREAM_PROCESSOR_ARITHMATICEXECUTORGENERATOR_H
