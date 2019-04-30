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
