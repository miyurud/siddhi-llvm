//
// Created by tharsanan on 4/7/19.
//

#ifndef STREAM_PROCESSOR_INPUTOUTPUTMAPPER_H
#define STREAM_PROCESSOR_INPUTOUTPUTMAPPER_H


#include <string>
#include "vector"

using namespace std;

class InputOutputMapper {
private:
    vector<string> dependOnList;
    string output;
public:
    void addToDependOn(string input);
    vector<string> getDependList();
    void setOutput(string outputM);
    string getOutput();
};

void InputOutputMapper::addToDependOn(string input) {
    dependOnList.push_back(input);
}

vector<string> InputOutputMapper::getDependList(){
    return dependOnList;
}

void InputOutputMapper::setOutput(string outputM){
    output = outputM;
}

string InputOutputMapper::getOutput(){
    return output;
}

#endif //STREAM_PROCESSOR_INPUTOUTPUTMAPPER_H
