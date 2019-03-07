//
// Created by tharsanan on 3/3/19.
//

#include <cpp-file-creation/ClassCreator.h>
#include <iostream>
#include "FileReader.h"

void FileReader::createFile(string fileName, map<std::string, std::string> parameters){
    ClassCreator classCreator;
    classCreator.className = "FileReader";
    Method method;
    method.identifier = "readFileAndFeedData";
    method.returnType = "void";
    for (auto const& x : parameters){
        method.addLine("std::ifstream inFile(\"/home/tharsanan/Tharsanan/FYP/siddhi-llvm/Generated_SP/input/"
        +fileName+"\");");
        method.addLine(x.second+" data;");
        method.addLine("Execution execution;");
        method.addLine("while(inFile >> data){");
        string attributeName = x.first;
        attributeName[0] = toupper(attributeName[0]);
        method.addLine("execution.setInputSource"+attributeName+"(data);\n}");   // need to change the method name programmatically.

    }
    classCreator.include.includes.push_back("fstream");
    classCreator.include.includes.push_back("Execution.h");
    classCreator.publicMembers.publicMethods.push_back(method);
    classCreator.createHeaderSource();
    classCreator.createCppSource();
}