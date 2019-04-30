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

string InputOutputMapper::getLogicString(){
    if(logicParts.empty()){
        return "";
    }
    else{
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
        tempMethod.addLine("ExecutorCreator::getBufferContainer()->push"+makeFirstCapital(output)+"OutputBuffer("+ temp +");");

        ArithmaticExecutorGenerator::addMethod(tempMethod);

        return temp;
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