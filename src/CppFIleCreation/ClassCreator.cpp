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
// Created by tharsanan on 2/23/19.
//

#include <fstream>
#include "ClassCreator.h"
void ClassCreator::prepareIncludeLines(){
    for (int i = 0; i < include.includes.size(); i++) {
        include.lines.push_back(string("#include \"") + include.includes[i] + string("\""));
    }
}
void ClassCreator::preparePublicMethodLines(){
    for (int i = 0; i < publicMembers.publicMethods.size(); i++) {
        Method method = publicMembers.publicMethods[i];
        string inputLine = "";
        inputLine += method.returnType + " " + method.identifier + "(";
        bool flag = false;
        for( auto const& x : method.params )
        {
            inputLine +=  x.first + " " + x.second + ",";
            flag = true;
        }
        if(flag){
            inputLine = inputLine.substr(0, inputLine.size()-1);
        }
        inputLine += ");";

        publicMembers.methodLines.push_back(inputLine);
    }
}

void ClassCreator::preparePublicVariableLines(){
    for (int i = 0; i < publicMembers.publicVariables.size(); i++) {
        Variable variable = publicMembers.publicVariables[i];
        string inputLine = "";
        inputLine += variable.dataType + " " + variable.identifier + ";";
        publicMembers.variableLines.push_back(inputLine);
    }
}

string ClassCreator::createHeaderSource(){
    prepareIncludeLines();
    preparePublicMethodLines();
    preparePublicVariableLines();
    for (int i = 0; i < include.includes.size(); i++) {
        headerSrc += include.includes[i] + "\n";
    }
    headerSrc += "class " + className + " {\n";
    headerSrc += "public : \n";
    string tab = "\t";
    for (int j = 0; j < publicMembers.methodLines.size(); ++j) {
        headerSrc += tab + publicMembers.methodLines[j] + "\n";
    }
    for (int k = 0; k < publicMembers.variableLines.size(); ++k) {
        headerSrc += tab + publicMembers.variableLines[k] + "\n";
    }
    headerSrc += "}\n";
    createHeaderFile();
    return headerSrc;
}

void ClassCreator::createHeaderFile(){
    ofstream headerFile(className + ".h");
    headerFile << headerSrc;
    headerFile.close();
}

string ClassCreator::createCppSource() {
    cppSrc += "#include " + string("\"") + className + ".h" + string("\"\n");
    for (int i = 0; i < publicMembers.publicMethods.size(); i++) {
        Method method = publicMembers.publicMethods[i];
        cppSrc += method.returnType  + " " + className + "::" + method.identifier + "(";
        bool flag = false;
        for( auto const& x : method.params )
        {
            cppSrc +=  x.first + " " + x.second + ",";
            flag = true;
        }
        if(flag){
            cppSrc = cppSrc.substr(0, cppSrc.size()-1);
        }
        cppSrc += "){\n";
        for (int j = 0; j < method.lines.size(); ++j) {
            cppSrc += method.lines[j] + "\n";
        }
        cppSrc += "}\n";
    }
    createCppFile();
    return cppSrc;
}

void ClassCreator::createCppFile(){
    ofstream headerFile1("/home/tharsanan/Tharsanan/FYP/siddhi-llvm/Genersted_SP/" + className + ".cpp");
    headerFile1 << cppSrc;
    headerFile1.close();
}