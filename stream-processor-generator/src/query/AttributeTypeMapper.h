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
