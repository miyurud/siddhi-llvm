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
// Created by tharsanan on 4/25/19.
//

#include "OutputEmitterGenerator.h"

void OutputEmitterGenerator::createOutputEmitter() {
    ClassCreator outputEmitter;
    Include include;
    include.includes.push_back("BufferContainer.h");
    outputEmitter.outSideClassDefnitions.push_back("class BufferContainer;\n");
    outputEmitter.include = include;
    outputEmitter.className = "OutputEmitter";
    Method emitData;
    emitData.identifier = "emitData";
    emitData.returnType = "void";
    for(auto const& x : AttributeTypeMapper::getOutputAttributeMap()){
        emitData.addLine(x.second + " " + x.first + " = " + "bufferContainer->getFrom" + makeFirstCapital(x.first) + "OutputBuffer();");
    }
    emitData.params.insert(pair<string,string>("BufferContainer*","bufferContainer"));
    outputEmitter.publicMembers.publicMethods.push_back(emitData);
    outputEmitter.createHeaderSource();
    outputEmitter.createCppSource();
}

std::string OutputEmitterGenerator::makeFirstCapital(std::string s) {
    char capitalFirstLetter = s.c_str()[0] - 32;
    return capitalFirstLetter + s.substr(1, s.size());

}
