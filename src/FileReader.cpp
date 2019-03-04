//
// Created by tharsanan on 3/3/19.
//

#include <CppFIleCreation/ClassCreator.h>
#include "FileReader.h"

void FileReader::createFile(string name){
    ClassCreator classCreator;
    classCreator.className = "FileReader";
    Method method;
    method.identifier = "readFileAndFeedData";
    method.returnType = "void";
    method.params.insert(std::pair<string, string>("name","string"));
    method.addLine("std::ifstream inFile(\"/home/tharsanan/Tharsanan/FYP/siddhi-llvm/stream_processor/\"+"+name+" );");
    method.addLine("string data;");
    method.addLine("Execution execution;");
    method.addLine("while(inFile >> data){");
    method.addLine("execution.setInputSourceWeight(data);\n}");   // need to change the method name programmatically.
    classCreator.publicMembers.publicMethods.push_back(method);
    classCreator.createHeaderSource();
    classCreator.createCppSource();
}