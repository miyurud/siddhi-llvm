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

#include <fstream>
#include "ClassCreator.h"

string ClassCreator::projectName = "STREAM_PROCESSOR";


void ClassCreator::preparePublicMethodLines(){
    for (int i = 0; i < publicMembers.publicMethods.size(); i++) {
        Method method = publicMembers.publicMethods[i];
        string inputLine = "";
        if(method.isStatic) {
            inputLine += "static " + method.returnType + " " + method.identifier + "(";
        }
        else{
            inputLine += method.returnType + " " + method.identifier + "(";
        }
        bool flag = false;
        inputLine += method.argString;
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
        if(variable.isStatic) {
            inputLine += "static " + variable.dataType + " " + variable.identifier + ";";
        }
        else{
            inputLine += variable.dataType + " " + variable.identifier + ";";
        }
        publicMembers.variableLines.push_back(inputLine);
    }
}

string ClassCreator::createHeaderSource(){
    headerSrc += "#ifndef " + projectName + "_" + makeAllUpper(className) + "_H\n" + "#define " + projectName + "_" + makeAllUpper(className) + "_H\n";

    preparePublicMethodLines();
    preparePublicVariableLines();
    headerSrc += "#include \"common.h\"\n";
    headerSrc += include.getIncludes() + "\n";
    for (int l = 0; l < outSideClassDefnitions.size(); ++l) {
        headerSrc += outSideClassDefnitions[l];
    }
    headerSrc += "class " + className + " {\n";
    headerSrc += "public : \n";
    headerSrc += className + "();\n";
    string tab = "\t";
    for (int j = 0; j < publicMembers.methodLines.size(); ++j) {
        headerSrc += tab + publicMembers.methodLines[j] + "\n";
    }
    for (int k = 0; k < publicMembers.variableLines.size(); ++k) {
        headerSrc += tab + publicMembers.variableLines[k] + "\n";
    }
    headerSrc += "};\n";
    for (int i = 0; i < enumList.size(); ++i) {
        headerSrc += "enum " + enumList[i].getName() + "{\n";
        bool flag = false;
        for( auto const& x : enumList[i].getNameValueMap()){
            headerSrc +=  x.first + " = " + x.second + ",";
            flag = true;
        }
        if(flag){
            headerSrc = headerSrc.substr(0, headerSrc.size()-1);
        }
        headerSrc += "};\n";
    }
    headerSrc += "\n#endif";
    createHeaderFile();
    return headerSrc;
}

void ClassCreator::createHeaderFile(){
    ofstream headerFile("/home/tharsanan/CLionProjects/ProducerConsumer/stream-processor/" + className + ".h");
    headerFile << headerSrc;
    headerFile.close();
}

string ClassCreator::createCppSource() {



    if(className != "main"){
        cppSrc += "#include " + string("\"") + className + ".h" + string("\"\n");
        cppSrc += className + "::" + className + "(){\n";
        for(int i = 0; i < publicMembers.publicVariables.size(); i++){
            if(publicMembers.publicVariables[i].isStatic){
                continue;
            }
            if(publicMembers.publicVariables[i].dataType == "int"){
                cppSrc += publicMembers.publicVariables[i].identifier + " = " + "0;\n";
            }
            else if(publicMembers.publicVariables[i].dataType == "string"){
                cppSrc += publicMembers.publicVariables[i].identifier + " = " + "\"\";\n";
            }
            else if(publicMembers.publicVariables[i].dataType == "long"){
                cppSrc += publicMembers.publicVariables[i].identifier + " = " + "0"
                                                                                ";\n";
            }
        }
        cppSrc += "}";
    }
    else{
        cppSrc += include.getIncludes();
    }

    for(int i = 0; i < publicMembers.publicVariables.size(); i++) {
        if (publicMembers.publicVariables[i].isStatic) {
            if(publicMembers.publicVariables[i].shoulInit){
                cppSrc += publicMembers.publicVariables[i].dataType + " " + className + "::" + publicMembers.publicVariables[i].identifier + " = " + publicMembers.publicVariables[i].initValue + ";\n";
            }
            else{
                cppSrc += publicMembers.publicVariables[i].dataType + " " + className + "::" + publicMembers.publicVariables[i].identifier + ";\n";
            }
        }
    }

    for (int i = 0; i < publicMembers.publicMethods.size(); i++) {
        Method method = publicMembers.publicMethods[i];
        if(className != "main") {
            cppSrc += method.returnType + " " + className + "::" + method.identifier + "(";
        }
        else{
            cppSrc += method.returnType + " " + method.identifier + "(";
        }
        bool flag = false;
        cppSrc += method.argString;
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
    ofstream headerFile1("/home/tharsanan/CLionProjects/ProducerConsumer/stream-processor/" + className + ".cpp");
    headerFile1 << cppSrc;
    headerFile1.close();
}

string ClassCreator::makeAllUpper(string value) {
    string toUpper = "";
    for(char& c : value) {
        toUpper += toupper(c);
    }
    return toUpper;
}
