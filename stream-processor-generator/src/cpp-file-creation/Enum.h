//
// Created by tharsanan on 4/17/19.
//

#ifndef STREAM_PROCESSOR_ENUM_H
#define STREAM_PROCESSOR_ENUM_H

#include "map"

using namespace std;
class Enum {
private:
    map<string, string> nameValueMap;
    string name;
public:
    Enum(string nameM);
    string getName();
    void addNameValuePair(string name, string value);
    map<string, string> getNameValueMap();

};


#endif //STREAM_PROCESSOR_ENUM_H
