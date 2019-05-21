//
// Created by chrustkiran on 4/30/19.
//

#ifndef TCP_LLVMSP_INPUTHANDLER_H
#define TCP_LLVMSP_INPUTHANDLER_H

#include <map>
#include <iostream>
#include <cstring>

using namespace std;

class InputHandler{
public:
    void send(map<string,string> dataMap){
        map<string,string>::iterator itr;
        for (itr = dataMap.begin(); itr != dataMap.end() ; ++itr) {
            if(strcmp(itr->first.c_str(), "weight")==0){
                cout << itr->second<<endl;
            }
        }

    }
};


#endif //TCP_LLVMSP_INPUTHANDLER_H
