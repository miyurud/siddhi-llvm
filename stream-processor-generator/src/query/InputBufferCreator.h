//
// Created by tharsanan on 4/13/19.
//

#ifndef STREAM_PROCESSOR_INPUTBUFFERCREATOR_H
#define STREAM_PROCESSOR_INPUTBUFFERCREATOR_H

#include "vector"
#include "InputOutputMapper.h"
#include "ClassCreator.h"

using namespace std;

class InputBufferCreator {
public:
    void createBuffers(vector<InputOutputMapper> ioMapperList, vector<string> inputTypeList);

};


#endif //STREAM_PROCESSOR_INPUTBUFFERCREATOR_H
