//
// Created by tharsanan on 4/25/19.
//

#ifndef STREAM_PROCESSOR_OUTPUTEMITTERGENERATOR_H
#define STREAM_PROCESSOR_OUTPUTEMITTERGENERATOR_H

#include <stream-processor-generator/src/cpp-file-creation/ClassCreator.h>
#include "AttributeTypeMapper.h"

class OutputEmitterGenerator {
public:
    void createOutputEmitter();
    static std::string makeFirstCapital(std::string s);
};


#endif //STREAM_PROCESSOR_OUTPUTEMITTERGENERATOR_H
