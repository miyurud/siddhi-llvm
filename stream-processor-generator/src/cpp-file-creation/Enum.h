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
