//
// Created by tharsanan on 4/24/19.
//

#include <stream-processor-generator/src/cpp-file-creation/ClassCreator.h>
#include <iostream>
#include "ArithmaticExecutorGenerator.h"

vector<Variable> ArithmaticExecutorGenerator::variables;
vector<Method> ArithmaticExecutorGenerator::methods;
vector<string> ArithmaticExecutorGenerator::includes;
void ArithmaticExecutorGenerator::addMethod(Method method) {
    methods.push_back(method);
}

void ArithmaticExecutorGenerator::addVariable(Variable variable) {
    variables.push_back(variable);
}

Method* ArithmaticExecutorGenerator::getMethodForOutput(string output) {
    string temp = output;
    temp[0] = toupper(output[0]);
    for (int i = 0; i < methods.size(); ++i) {
        if(methods[i].identifier == "execute" + temp){
            return &methods[i];
        }
    }
    return nullptr;
}

void ArithmaticExecutorGenerator::create() {
    ClassCreator classCreator;
    classCreator.className = "Executor";
    includes.emplace_back("ExecutorCreator.h");
    Include include;
    include.includes = includes;
    classCreator.include = include;
    classCreator.publicMembers.publicMethods = methods;
    classCreator.publicMembers.publicVariables = variables;
    classCreator.createHeaderSource();
    classCreator.createCppSource();
}

void ArithmaticExecutorGenerator::addInclude(string include) {
    includes.push_back(include);
}
