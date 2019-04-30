//
// Created by tharsanan on 4/28/19.
//

#ifndef STREAM_PROCESSOR_PROCESSEDTHREADHANDLERCREATOR_H
#define STREAM_PROCESSOR_PROCESSEDTHREADHANDLERCREATOR_H
#include <stream-processor-generator/src/cpp-file-creation/ClassCreator.h>
#include "AttributeTypeMapper.h"


class ProcessedThreadHandlerCreator {
public:
    static void createProcessedThreadHandler();
    static bool contains(vector<string> argList, int value);
    static std::string makeFirstCapital(std::string s);
};


#endif //STREAM_PROCESSOR_PROCESSEDTHREADHANDLERCREATOR_H
