//
// Created by chrustkiran on 4/30/19.
//

#ifndef TCP_LLVMSP_MAPPING_H
#define TCP_LLVMSP_MAPPING_H


#include <map>
#include <iostream>
#include "InputHandler.h"

using namespace std;

class Mapping {


public:
    void sendData(string s);
private:
    InputHandler inputHandler;
    virtual map<string, string> changeKeyValue(string s) = 0;


};


#endif //TCP_LLVMSP_MAPPING_H
