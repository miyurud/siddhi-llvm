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

#include "AttributeTypeMapper.h"


map<string, string> AttributeTypeMapper::inputAttributeMap;
map<string, string> AttributeTypeMapper::outputAttributeMap;
map<string, int> AttributeTypeMapper::inputAttributeNumberMap;
map<string, int> AttributeTypeMapper::outputAttributeNumberMap;
vector<string> AttributeTypeMapper::inputAttributeNameVector;
vector<string> AttributeTypeMapper::outputAttributeNameVector;
int AttributeTypeMapper::countInput = 0;
int AttributeTypeMapper::countOutput = 0;

map<string, string> AttributeTypeMapper::getInputAttributeMap(){
    return inputAttributeMap;
}

map<string, string> AttributeTypeMapper::getOutputAttributeMap(){
    return outputAttributeMap;
}

map<string, int> AttributeTypeMapper::getInputAttributeNumberMap(){
    return inputAttributeNumberMap;
}

map<string, int> AttributeTypeMapper::getOutputAttributeNumberMap(){
    return outputAttributeNumberMap;
}

void AttributeTypeMapper::addToInputAttributeMap(string key, string value){
    inputAttributeNumberMap.insert(pair<string,int>(key, countInput));
    countInput++;
    inputAttributeMap.insert(pair<string, string>(key,value));
}

void AttributeTypeMapper::addToOutputAttributeMap(string key, string value){
    outputAttributeNumberMap.insert(pair<string,int>(key, countOutput));
    countOutput++;
    outputAttributeMap.insert(pair<string, string>(key,value));
}

string AttributeTypeMapper::getTypeForInputAttribute(string attribute){
    auto it = inputAttributeMap.find(attribute);
    if(it == inputAttributeMap.end()){
       return "";
    }
    else{
        return it->second;
    }
}

int AttributeTypeMapper::getNumberForInputAttribute(string attribute){
    auto it = inputAttributeNumberMap.find(attribute);
    if(it == inputAttributeNumberMap.end()){
        return -1;
    }
    else{
        return it->second;
    }
}

int AttributeTypeMapper::getNumberForOutputAttribute(string attribute){
    auto it = outputAttributeNumberMap.find(attribute);
    if(it == outputAttributeNumberMap.end()){
        return -1;
    }
    else{
        return it->second;
    }
}

string AttributeTypeMapper::getTypeForOutputAttribute(string attribute){
    auto it = outputAttributeMap.find(attribute);
    if(it == outputAttributeMap.end()){
        return "";
    }
    else{
        return it->second;
    }
}

vector<string> AttributeTypeMapper::getOutputAttributeNameVector() {
    return outputAttributeNameVector;
}

vector<string> AttributeTypeMapper::getInputAttributeNameVector() {
    return inputAttributeNameVector;
}

void AttributeTypeMapper::addInputAttributeNameVector(string value) {
    inputAttributeNameVector.push_back(value);
}

void AttributeTypeMapper::addOutputAttributeNameVector(string value) {
    outputAttributeNameVector.push_back(value);
}
