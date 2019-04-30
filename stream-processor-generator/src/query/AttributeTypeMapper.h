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

#ifndef STREAM_PROCESSOR_ATTRIBUTETYPEMAPPER_H
#define STREAM_PROCESSOR_ATTRIBUTETYPEMAPPER_H

#include "map"
#include "vector"

using namespace std;

class AttributeTypeMapper {
private:
    static map<string, string> inputAttributeMap;
    static map<string, string> outputAttributeMap;
    static map<string, int> inputAttributeNumberMap;
    static map<string, int> outputAttributeNumberMap;
    static vector<string> inputAttributeNameVector;
    static vector<string> outputAttributeNameVector;
    static int countInput;
    static int countOutput;
public:
    static map<string, string> getInputAttributeMap();
    static void addToInputAttributeMap(string key, string value);
    static map<string, string> getOutputAttributeMap();
    static void addToOutputAttributeMap(string key, string value);
    static string getTypeForInputAttribute(string attribute);
    static string getTypeForOutputAttribute(string attribute);

    static int getNumberForInputAttribute(string attribute);
    static int getNumberForOutputAttribute(string attribute);

    static map<string, int> getInputAttributeNumberMap();
    static map<string, int> getOutputAttributeNumberMap();

    static vector<string> getInputAttributeNameVector();
    static vector<string> getOutputAttributeNameVector();
    static void addInputAttributeNameVector(string value);
    static void addOutputAttributeNameVector(string value);

};


#endif //STREAM_PROCESSOR_ATTRIBUTETYPEMAPPER_H
