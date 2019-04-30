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
// Created by chrustkiran on 4/7/19.
//

#include <fstream>
#include "BufferGenerator.h"
#include "ArithmaticExecutorGenerator.h"

std::vector<std::string> BufferGenerator::split(std::string s, std::string delimiter) {
    std::vector<std::string> arguments;

    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        // std::cout << token << std::endl;
        arguments.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    // std::cout << s << std::endl;
    arguments.push_back(s);
    return arguments;
}

std::string BufferGenerator::makeFirstCapital(std::string s) {
    char capitalFirstLetter = s.c_str()[0] - 32;
    return capitalFirstLetter + s.substr(1, s.size());


}

void BufferGenerator::readArgs(std::string input_args) {
    std::vector<std::string> input_args_array = split(input_args, ",");
    for (int i = 0; i < input_args_array.size(); i++) {
        std::vector<std::string> types_params_array = split(input_args_array[i], " ");
        BufferGenerator::input_params.push_back(types_params_array[0]);
        BufferGenerator::input_types.push_back(types_params_array[1]);
        //std::cout << input_args_array[i] << std::endl;
    }


}


void BufferGenerator::preparingVariables() {
//    static mutex mutexForPopPushLock[constants::inputAttributeCount];
    Variable mutexArray;
    mutexArray.isStatic = true;
    mutexArray.dataType = "mutex";
    mutexArray.identifier = "mutexForPopPushLock[constants::inputAttributeCount]";
    mutexArray.shoulInit = false;
    for (int i = 0; i < input_params.size(); ++i) {
        Variable variable;
        variable.dataType = "Buffer<" + input_types[i] + ">";
        variable.identifier = input_params[i] + "Buffer";
        variables.push_back(variable);

        Method method;
        method.returnType = "void";
        method.identifier = "push" + makeFirstCapital(input_params[i])+"Buffer";
        method.params.insert(pair<string, string>(input_types[i], "value"));
        method.lines.push_back(input_params[i] + "Buffer.push(value);");

        methods.push_back(method);

        Method get;
        get.identifier = "getFrom" + makeFirstCapital(input_params[i])+"Buffer";
        get.params.insert(pair<string, string>("int", "consumerIndex"));
        get.returnType = input_types[i] ;
        get.lines.push_back("unique_lock<mutex> lock(mutexForPopPushLock["+to_string(i)+"]);");
        get.lines.push_back("if(BufferLocker::canPopData(" + to_string(i) + ", consumerIndex, &lock)){");
        get.lines.push_back("return " + input_params[i] + "Buffer.pop();\n}");
        get.lines.push_back("else{\nreturn " + input_params[i] + "Buffer.front();\n}");
        methods.push_back(get);
    }
    variables.push_back(mutexArray);
    for (int j = 0; j < iomappers.size(); ++j) {
        Variable variable;
        variable.dataType = "Buffer<" + AttributeTypeMapper::getTypeForOutputAttribute(iomappers[j].getOutput()) + ">";
        variable.identifier = iomappers[j].getOutput() + "OutputBuffer";
        variables.push_back(variable);
    }
}

void BufferGenerator::preparingExecutingFunction() {
    Method caseMethod;
    caseMethod.returnType = "void";
    caseMethod.identifier = "executeProcess";
    caseMethod.lines.push_back("switch(option) {");
    caseMethod.params.insert(pair<string,string>("int","option"));
    for (int i = 0; i < this->iomappers.size(); ++i) {


        caseMethod.lines.push_back("case "+std::to_string(i)+" : processLogic"+std::to_string(i)+"();\nbreak;");
        Method method;
        method.identifier = "processLogic"+to_string(AttributeTypeMapper::getNumberForOutputAttribute(iomappers[i].getOutput()));
        method.returnType = "void";
        string args = "";
        bool commaFlag = false;
        Method* methodForexecuteLogic = ArithmaticExecutorGenerator::getMethodForOutput(iomappers[i].getOutput());
        for (int j = 0; j < iomappers[i].getDependList().size(); ++j) {
            string param = iomappers[i].getDependList()[j];
            string type = AttributeTypeMapper::getTypeForInputAttribute(iomappers[i].getDependList()[j]);
            method.lines.push_back(type+" "+param+" = getFrom" + makeFirstCapital(param)+"Buffer"+"("+to_string(i)+");");
            args = args +param+", ";
            commaFlag = true;
            methodForexecuteLogic->argString += AttributeTypeMapper::getTypeForInputAttribute(iomappers[i].getDependList()[j]) + " " + iomappers[i].getDependList()[j] + ",";
        }
        if(commaFlag){
            methodForexecuteLogic->argString = methodForexecuteLogic->argString.substr(0,methodForexecuteLogic->argString.size()-1);
        }
        method.lines.push_back("Executor::execute" +  makeFirstCapital(iomappers[i].getOutput()) + "("+args.substr(0,args.size()-2)+" );");
        this->methods.push_back(method);
    }
    caseMethod.lines.push_back("}");
    this->methods.push_back(caseMethod);
    for (int j = 0; j < iomappers.size(); ++j) {
        Method getMethod;
        getMethod.isStatic = false;
        getMethod.returnType = AttributeTypeMapper::getTypeForOutputAttribute(iomappers[j].getOutput());
        getMethod.identifier = "getFrom"+ makeFirstCapital(iomappers[j].getOutput())+"OutputBuffer";
        getMethod.lines.push_back("return " + iomappers[j].getOutput() + "OutputBuffer.pop();\n");
        methods.push_back(getMethod);

        Method method;
        method.returnType = "void";
        method.identifier = "push" + makeFirstCapital(iomappers[j].getOutput() + "OutputBuffer");
        method.params.insert(pair<string, string>(AttributeTypeMapper::getTypeForOutputAttribute(iomappers[j].getOutput()), "value"));
        method.lines.push_back(iomappers[j].getOutput() + "OutputBuffer.push(value);");
        methods.push_back(method);

    }
}

void BufferGenerator::createViaFileCreator() {
    this->producer.className = "BufferContainer";
    this->include.includes.emplace_back("Buffer.h");
    this->include.includes.emplace_back("iostream");
    this->include.includes.emplace_back("Executor.h");
    this->include.includes.emplace_back("BufferLocker.h");

    this->producer.include = this->include;

    preparingVariables();

    preparingExecutingFunction();
    this->producer.publicMembers.publicVariables = this->variables;

    this->producer.publicMembers.publicMethods = this->methods;


    this->producer.createCppSource();
    this->producer.createHeaderSource();


}


