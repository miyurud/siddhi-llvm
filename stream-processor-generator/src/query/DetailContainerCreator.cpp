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
// Created by tharsanan on 4/13/19.
//

#include "DetailContainerCreator.h"

DetailContainerCreator::DetailContainerCreator(){

}

void DetailContainerCreator::create(){
    ClassCreator detailContainer;
    detailContainer.className = "DetailContainer";

    Variable numberOfOutputAttributes;
    numberOfOutputAttributes.isStatic = true;
    numberOfOutputAttributes.initValue = to_string(AttributeTypeMapper::getOutputAttributeMap().size());
    numberOfOutputAttributes.dataType = "int";
    numberOfOutputAttributes.identifier = "numberOfOutputAttributes";
    detailContainer.publicMembers.publicVariables.push_back(numberOfOutputAttributes);

    Variable inputAttributeCount;
    inputAttributeCount.isStatic = true;
    inputAttributeCount.initValue = to_string(AttributeTypeMapper::getInputAttributeMap().size());
    inputAttributeCount.dataType = "int";
    inputAttributeCount.identifier = "inputAttributeCount";
    detailContainer.publicMembers.publicVariables.push_back(inputAttributeCount);

    Variable consumerCountForInput;
    consumerCountForInput.isStatic = true;
    consumerCountForInput.initValue = prepareDependentListForInputAttribute();
    consumerCountForInput.dataType = "int";
    consumerCountForInput.identifier = "consumerCountForInput[]";
    detailContainer.publicMembers.publicVariables.push_back(consumerCountForInput);

    Variable executionFlag;
    executionFlag.isStatic = true;
    executionFlag.initValue = "true";
    executionFlag.dataType = "bool";
    executionFlag.identifier = "executionFlag";
    detailContainer.publicMembers.publicVariables.push_back(executionFlag);

    Method setExecutionFlag;
    setExecutionFlag.isStatic = true;
    setExecutionFlag.identifier = "setExecutionFlag";
    setExecutionFlag.returnType = "void";
    setExecutionFlag.params.insert(pair<string, string>("bool","value"));
    setExecutionFlag.addLine("executionFlag = value;");
    detailContainer.publicMembers.publicMethods.push_back(setExecutionFlag);

    Method getExecutionFlag;
    getExecutionFlag.isStatic = true;
    getExecutionFlag.identifier = "getExecutionFlag";
    getExecutionFlag.returnType = "bool";
    getExecutionFlag.addLine("return executionFlag;");
    detailContainer.publicMembers.publicMethods.push_back(getExecutionFlag);

    Method getInputAttributeCount;
    getInputAttributeCount.isStatic = true;
    getInputAttributeCount.identifier = "getInputAttributeCount";
    getInputAttributeCount.returnType = "int";
    getInputAttributeCount.addLine("return inputAttributeCount;");
    detailContainer.publicMembers.publicMethods.push_back(getInputAttributeCount);

    Method getDependentConsumerCountForInput;
    getDependentConsumerCountForInput.isStatic = true;
    getDependentConsumerCountForInput.identifier = "getDependentConsumerCountForInput";
    getDependentConsumerCountForInput.params.insert(pair<string, string>("int", "input"));
    getDependentConsumerCountForInput.returnType = "int";
    getDependentConsumerCountForInput.addLine("return consumerCountForInput[input];");
    detailContainer.publicMembers.publicMethods.push_back(getDependentConsumerCountForInput);

    Method methodGetNumberOfOutputAttributes;
    methodGetNumberOfOutputAttributes.isStatic = true;
    methodGetNumberOfOutputAttributes.identifier = "getNumberOfOutputAttributes";
    methodGetNumberOfOutputAttributes.returnType = "int";
    methodGetNumberOfOutputAttributes.addLine("return numberOfOutputAttributes;");
    detailContainer.publicMembers.publicMethods.push_back(methodGetNumberOfOutputAttributes);

    Enum constants("constants");
    constants.addNameValuePair("inputAttributeCount", to_string(AttributeTypeMapper::getInputAttributeMap().size()));

    detailContainer.enumList.push_back(constants);


    detailContainer.createHeaderSource();
    detailContainer.createCppSource();
}

string DetailContainerCreator::prepareDependentListForInputAttribute(){
    string list = "{";
    for (int j = 0; j < AttributeTypeMapper::getInputAttributeMap().size(); ++j) {
        int count = 0;
        for (int i = 0; i < TranslatorVisitor::getInputOutputMapperList().size(); ++i) {
            if(contains(TranslatorVisitor::getInputOutputMapperFromList(i)->getDependList(),j)){
                count++;
            }
        }
        list+=to_string(count);
        if(j != AttributeTypeMapper::getInputAttributeMap().size() - 1){
            list += ",";
        }
    }
    list += "}";
    return list;
}

bool DetailContainerCreator::contains(vector<string> argList, int value){
    for (int i = 0; i < argList.size(); ++i) {
        if(AttributeTypeMapper::getNumberForInputAttribute(argList[i]) == value){
            return true;
        }
    }
    return false;
}