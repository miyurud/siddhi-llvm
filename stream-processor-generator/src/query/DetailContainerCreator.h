//
// Created by tharsanan on 4/13/19.
//

#ifndef STREAM_PROCESSOR_DETAILCONTAINERCREATOR_H
#define STREAM_PROCESSOR_DETAILCONTAINERCREATOR_H

#include <stream-processor-generator/src/cpp-file-creation/ClassCreator.h>
#include "AttributeTypeMapper.h"
#include "TranslatorVisitor.h"

class DetailContainerCreator {
public:
    DetailContainerCreator();
    void create();
    string prepareDependentListForInputAttribute();
    bool contains(vector<string> argList, int value);
};


#endif //STREAM_PROCESSOR_DETAILCONTAINERCREATOR_H
