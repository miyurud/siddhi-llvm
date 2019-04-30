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
