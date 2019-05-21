//
// Created by chrustkiran on 4/30/19.
//

#include "KeyValue.h"
#include "split.h"

map<string, string> KeyValue::changeKeyValue(string s)  {

    map<string,string>  finalMap;
    size_t pos = 0;

    if((pos = s.find("=") )!= string::npos){
        finalMap.insert(pair<string,string>(s.substr(0,pos), s.substr(pos+1, s.size())));
    }

    return finalMap;

}


