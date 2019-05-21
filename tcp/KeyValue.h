//
// Created by chrustkiran on 4/30/19.
//

#ifndef TCP_LLVMSP_KEYVALUE_H
#define TCP_LLVMSP_KEYVALUE_H

#include <map>
#include <iostream>
#include "Mapping.h"

using namespace std;

class KeyValue : public Mapping{

private:
    map<string,string> changeKeyValue(string x);
};


#endif //TCP_LLVMSP_KEYVALUE_H
