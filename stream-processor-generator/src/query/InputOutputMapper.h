//
// Created by tharsanan on 4/10/19.
//

#ifndef STREAM_PROCESSOR_TEST_H
#define STREAM_PROCESSOR_TEST_H


#include <string>
#include "vector"

using namespace std;

class InputOutputMapper {
private:
    vector<string> dependOnList;
    string output;
    vector<string> logicParts;
public:
    void addToDependOn(string input);
    vector<string> getDependList();
    void setOutput(string outputM);
    string getOutput();
    void addLogicPart(string logicM);
    string getLogicString();
    bool contains(string* ptr, string value, int len);
    std::string makeFirstCapital(std::string s);
};


#endif //STREAM_PROCESSOR_TEST_H
