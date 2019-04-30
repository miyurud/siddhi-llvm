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