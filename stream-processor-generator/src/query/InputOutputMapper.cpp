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

#include "InputOutputMapper.h"
#include "ArithmaticExecutorGenerator.h"
#include "AttributeTypeMapper.h"

void InputOutputMapper::addToDependOn(string input) {
    dependOnList.push_back(input);//stream-processor-generator/src/query/InputOutputMapper.cpp
}

vector<string> InputOutputMapper::getDependList(){
    return dependOnList;
}

void InputOutputMapper::setOutput(string outputM){
    output = outputM;
}

string InputOutputMapper::getOutput(){
    return output;
}

void InputOutputMapper::addLogicPart(string logicM) {
    logicParts.push_back(logicM);
}

void InputOutputMapper::getLogicString(){
    if(!logicParts.empty()){
        if(functionStringFlag){
            Method tempMethod;
            tempMethod.isStatic = true;
            tempMethod.identifier = "execute" + makeFirstCapital(output);
            tempMethod.returnType = "void";
            tempMethod.addLine(prepareFunctionString(functionExecutionString, ("ExecutorCreator::getBufferContainer()->push" + makeFirstCapital(output) + "OutputBuffer(")));


            ArithmaticExecutorGenerator::addMethod(tempMethod);
        }else {
            string temp = "";
            string array[3] = {"sum", "average"};
            for (int i = 0; i < logicParts.size(); ++i) {
                if(contains(array, logicParts[i], 2)){
                    ArithmaticExecutorGenerator::addInclude(makeFirstCapital(logicParts[i] + ".h"));

                    Variable tempVar;
                    tempVar.identifier = logicParts[i] + makeFirstCapital(logicParts[i+2]) + makeFirstCapital(output);
                    tempVar.isStatic = true;
                    tempVar.shoulInit = false;
                    tempVar.dataType = makeFirstCapital(logicParts[i])+ "<" + AttributeTypeMapper::getTypeForOutputAttribute((output)) + ">";
                    tempVar.isStatic = true;
                    ArithmaticExecutorGenerator::addVariable(tempVar);

                    logicParts[i] = logicParts[i] + makeFirstCapital(logicParts[i+2]) + makeFirstCapital(output) + ".get" + makeFirstCapital(logicParts[i]);

                }
            }

            for (int i = 0; i < logicParts.size(); ++i) {
                temp += logicParts[i];
            }
            Method tempMethod;
            tempMethod.isStatic = true;
            tempMethod.identifier = "execute" + makeFirstCapital(output);
            tempMethod.returnType = "void";
            tempMethod.addLine(
                    "ExecutorCreator::getBufferContainer()->push" + makeFirstCapital(output) + "OutputBuffer(" + temp +
                    ");");

            ArithmaticExecutorGenerator::addMethod(tempMethod);
        }
    }
}

bool InputOutputMapper::contains(string* ptr, string value, int len){
    while(ptr){
        if(--len == 0){
            break;
        }
        if(*ptr == value){
            return true;
        }
        ptr++;
    }
    return false;
}

std::string InputOutputMapper::makeFirstCapital(std::string s) {
    char capitalFirstLetter = s.c_str()[0] - 32;
    return capitalFirstLetter + s.substr(1, s.size());


}

void InputOutputMapper::setFunctionStringFlag(bool value) {
    functionStringFlag = value;
}

InputOutputMapper::InputOutputMapper() {
    functionStringFlag = false;
}

string InputOutputMapper::prepareFunctionString(string functionString, string pushString) {
    string returnString = "return";
    string semicolon = ";";
    std::size_t foundReturn = functionString.find(returnString);
    std::size_t foundSemicolon = functionString.find(semicolon, foundReturn + 1);
    string preparedString = "";
    while (foundReturn != std::string::npos){
        foundSemicolon = functionString.find(semicolon, foundReturn + 1);
        preparedString += functionString.substr(0, foundReturn);
        preparedString += pushString;
        string temp = functionString.substr((foundReturn + 6), (foundSemicolon - foundReturn - 6));
        preparedString += temp + ");";
        foundReturn = functionString.find(returnString, foundReturn + 1);
    }
    preparedString += functionString.substr(foundSemicolon+1, (functionString.size() - foundSemicolon - 1));
    return preparedString;
}

void InputOutputMapper::setFunctionExecutionString(string value) {
    functionExecutionString = value;
}

