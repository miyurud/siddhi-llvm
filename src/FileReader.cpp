//
// Created by tharsanan on 3/3/19.
//

#include <cpp-file-creation/ClassCreator.h>
#include "FileReader.h"

void FileReader::createFile(string name){
    ClassCreator classCreator;
    classCreator.className = "FileReader";
    Method method;
    method.identifier = "readFileAndFeedData";
    method.returnType = "void";
    //method.params.insert(std::pair<string, string>("name","string"));
    method.addLine("std::ifstream inFile(\"/home/tharsanan/Tharsanan/FYP/siddhi-llvm/Generated_SP/input/"+name+"\");");
    method.addLine("int data;");
    method.addLine("Execution execution;");
    method.addLine("while(inFile >> data){");
    method.addLine("execution.setInputSourceWeight(data);\n}");   // need to change the method name programmatically.
    classCreator.include.includes.push_back("fstream");
    classCreator.include.includes.push_back("Execution.h");
    classCreator.publicMembers.publicMethods.push_back(method);
    classCreator.createHeaderSource();
    classCreator.createCppSource();
}