//
// Created by chrustkiran on 6/13/19.
//

#include "StreamProcessor.h"
#include "TimeWindow.h"
#include "LengthWindow.h"

Buffer<Data> *StreamProcessor::buffer = NULL;
 Processor *StreamProcessor::processor = NULL;
 Window *StreamProcessor::window = NULL;

void StreamProcessor::initialize(int T_NUM) {
     StreamProcessor::buffer = new Buffer<Data>();
     StreamProcessor::processor = new Processor();
     StreamProcessor::window = new LengthWindow;
     window->setCondVariable(1);
    this->threadPool->initializeThreads(T_NUM);
}
