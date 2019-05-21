//
// Created by chrustkiran on 4/30/19.
//

#include "Mapping.h"


void Mapping::sendData(string s) {
    inputHandler.send(changeKeyValue(s));
}