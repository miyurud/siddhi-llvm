//
// Created by chrustkiran on 4/7/19.
//

#ifndef BUFFER_GENERATOR_PRODUCERCREATOR_H
#define BUFFER_GENERATOR_PRODUCERCREATOR_H

#include "stdio.h"
#include "iostream"
#include "vector"
#include "InputOutputMapper.h"
#include "cpp-file-creation/ClassCreator.h"
#include "cpp-file-creation/Method.h"
#include "AttributeTypeMapper.h"


class BufferGenerator {
private:
    std::vector<std::string> split(std::string s, std::string delimiter);
    std::vector<std::string> input_types;
    std::vector<std::string> input_params;
    std::vector<std::string> bufferInitializing();
    std::string getMethodWriting(std::vector<InputOutputMapper*> mappingVector);
    std::string makeFirstCapital(std::string s);

    ClassCreator producer;


    Include include;
    vector<Variable> variables;
    vector<Method> methods;
    void preparingVariables();
    void preparingExecutingFunction();

public:
    void readArgs(std::string input_args);
    const std::vector<std::string> &getInput_types() const;
    const std::vector<std::string> &getInput_params() const;
    void createFile();
    void createViaFileCreator();
    vector<InputOutputMapper> iomappers;
};


#endif //BUFFER_GENERATOR_PRODUCERCREATOR_H
