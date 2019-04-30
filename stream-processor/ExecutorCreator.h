//
// Created by tharsanan on 4/13/19.
//

#ifndef STREAM_PROCESSOR_EXECUTORCREATOR_H
#define STREAM_PROCESSOR_EXECUTORCREATOR_H

#include <thread>
#include "BufferContainer.h"
#include "OutputEmitter.h"
#include "PerformanceMonitor.h"

using namespace std;

class BufferContainer;

class ExecutorCreator {
private:
    int numberOfOutputAttributes;
    static BufferContainer* bufferContainer;
public:
    ExecutorCreator();
    void createThreads(ExecutorCreator* executorCreator);
    void run(int consumerIndex);
    void tempFunc();
    static BufferContainer* getBufferContainer();
    void outputThreadFunc();
};


#endif //STREAM_PROCESSOR_EXECUTORCREATOR_H
