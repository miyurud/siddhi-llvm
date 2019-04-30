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
// Created by tharsanan on 4/28/19.
//

#include <stream-processor-generator/src/antlr/TranslatorVisitor.h>
#include "ProcessedThreadHandlerCreator.h"

void ProcessedThreadHandlerCreator::createProcessedThreadHandler() {
    ClassCreator processedThreadHandler;
    vector<int> dependentThreadList[AttributeTypeMapper::getInputAttributeNameVector().size()];
    for (int j = 0; j < AttributeTypeMapper::getInputAttributeNameVector().size(); ++j) {
        int count = 0;
        string initValue = "{";
        for (int i = 0; i < TranslatorVisitor::getInputOutputMapperList().size(); ++i) {
            if(contains(TranslatorVisitor::getInputOutputMapperFromList(i)->getDependList(),j)) {
                count++;
                if (count == 1) {
                    initValue += "true";
                } else {
                    initValue += ",true";
                }
                dependentThreadList[j].push_back(i);
            }
        }

        sort(dependentThreadList[j].begin(), dependentThreadList[j].end());
        initValue += "}";
        Variable boolList;
        boolList.identifier = "boolArray" + makeFirstCapital(AttributeTypeMapper::getInputAttributeNameVector()[j])+"["+to_string(count)+"]";
        boolList.isStatic = true;
        boolList.shoulInit = true;
        boolList.dataType = "bool";
        boolList.initValue = initValue;
        processedThreadHandler.publicMembers.publicVariables.push_back(boolList);
    }

    Method allSet;
    allSet.returnType = "bool";
    allSet.identifier = "allSet";
    allSet.isStatic = true;
    allSet.params.insert(pair<string , string>("int ", "inputIndex"));
    allSet.addLine("switch (inputIndex){");
    for (int j = 0; j < AttributeTypeMapper::getInputAttributeNameVector().size(); ++j) {
        allSet.addLine("case " + to_string(j) + " : ");
        string returnString = "return ";
        for (int i = 0; i < dependentThreadList[j].size(); ++i) {
            if(i == dependentThreadList[j].size() - 1){
                returnString += "!boolArray" + makeFirstCapital(AttributeTypeMapper::getInputAttributeNameVector()[j]) + "[" + to_string(i) + "];";
            }
            else{
                returnString += "!boolArray" + makeFirstCapital(AttributeTypeMapper::getInputAttributeNameVector()[j]) + "[" + to_string(i) + "] && ";
            }
        }

        allSet.addLine(returnString);
    }
    allSet.addLine("}");
    processedThreadHandler.publicMembers.publicMethods.push_back(allSet);




    Method setAllDefault;
    setAllDefault.returnType = "void";
    setAllDefault.identifier = "setAllDefault";
    setAllDefault.isStatic = true;
    setAllDefault.params.insert(pair<string , string>("int ", "inputIndex"));
    setAllDefault.addLine("switch (inputIndex){");
    for (int j = 0; j < AttributeTypeMapper::getInputAttributeNameVector().size(); ++j) {
        setAllDefault.addLine("case " + to_string(j) + " : ");
        for (int i = 0; i < dependentThreadList[j].size(); ++i) {
            setAllDefault.addLine("boolArray" + makeFirstCapital(AttributeTypeMapper::getInputAttributeNameVector()[j]) + "[" + to_string(i) + "] = true;");
        }
        setAllDefault.addLine("break;");
    }
    setAllDefault.addLine("}");
    processedThreadHandler.publicMembers.publicMethods.push_back(setAllDefault);


    Method setValueForInputAndConsumer;
    setValueForInputAndConsumer.returnType = "void";
    setValueForInputAndConsumer.identifier = "setValueForInputAndConsumer";
    setValueForInputAndConsumer.isStatic = true;
    setValueForInputAndConsumer.params.insert(pair<string , string>("int ", "inputIndex"));
    setValueForInputAndConsumer.params.insert(pair<string , string>("int", "consumerIndex"));
    setValueForInputAndConsumer.params.insert(pair<string , string>("bool", "value"));
    setValueForInputAndConsumer.addLine("switch (inputIndex){");
    for (int j = 0; j < AttributeTypeMapper::getInputAttributeNameVector().size(); ++j) {
        setValueForInputAndConsumer.addLine("case " + to_string(j) + " : ");
        setValueForInputAndConsumer.addLine("switch (consumerIndex){");
        for (int i = 0; i < dependentThreadList[j].size(); ++i) {
            setValueForInputAndConsumer.addLine("case " + to_string(dependentThreadList[j][i]) + " : ");
            setValueForInputAndConsumer.addLine("boolArray" + makeFirstCapital(AttributeTypeMapper::getInputAttributeNameVector()[j]) + "[" + to_string(i) + "] = value;\n break;");
        }
        setValueForInputAndConsumer.addLine("}");
    }
    setValueForInputAndConsumer.addLine("}");
    processedThreadHandler.publicMembers.publicMethods.push_back(setValueForInputAndConsumer);



    Method getValueForInputAndConsumer;
    getValueForInputAndConsumer.returnType = "bool";
    getValueForInputAndConsumer.identifier = "getValueForInputAndConsumer";
    getValueForInputAndConsumer.isStatic = true;
    getValueForInputAndConsumer.params.insert(pair<string , string>("int ", "inputIndex"));
    getValueForInputAndConsumer.params.insert(pair<string , string>("int", "consumerIndex"));
    getValueForInputAndConsumer.addLine("switch (inputIndex){");
    for (int j = 0; j < AttributeTypeMapper::getInputAttributeNameVector().size(); ++j) {
        getValueForInputAndConsumer.addLine("case " + to_string(j) + " : ");
        getValueForInputAndConsumer.addLine("switch (consumerIndex){");
        for (int i = 0; i < dependentThreadList[j].size(); ++i) {
            getValueForInputAndConsumer.addLine("case " + to_string(dependentThreadList[j][i]) + " : ");
            getValueForInputAndConsumer.addLine("return boolArray" + makeFirstCapital(AttributeTypeMapper::getInputAttributeNameVector()[j]) + "[" + to_string(i) + "];");
        }
        getValueForInputAndConsumer.addLine("}");
    }
    getValueForInputAndConsumer.addLine("}");
    processedThreadHandler.publicMembers.publicMethods.push_back(getValueForInputAndConsumer);






    processedThreadHandler.className = "ProcessedThreadHandler";
    processedThreadHandler.createHeaderSource();
    processedThreadHandler.createCppSource();

}

bool ProcessedThreadHandlerCreator::contains(vector<string> argList, int value){
    for (int i = 0; i < argList.size(); ++i) {
        if(AttributeTypeMapper::getNumberForInputAttribute(argList[i]) == value){
            return true;
        }
    }
    return false;
}

std::string ProcessedThreadHandlerCreator::makeFirstCapital(std::string s) {
    char capitalFirstLetter = s.c_str()[0] - 32;
    return capitalFirstLetter + s.substr(1, s.size());

}
