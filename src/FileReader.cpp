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