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
// Created by tharsanan on 4/17/19.
//

#include "Enum.h"

void Enum::addNameValuePair(string name, string value){
    nameValueMap.insert(pair<string,string>(name,value));
}

map<string, string> Enum::getNameValueMap(){
    return nameValueMap;
}

Enum::Enum(string nameM) {
    name = nameM;
}

string Enum::getName() {
    return name;
}