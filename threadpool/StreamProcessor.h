//
// Created by chrustkiran on 6/13/19.
//

#ifndef STREAMPROCESSORLLVM_TP_STREAMPROCESSOR_H
#define STREAMPROCESSORLLVM_TP_STREAMPROCESSOR_H


#include "Buffer.h"
#include "Data.h"
#include "Processor.h"
#include "Window.h"
#include "ThreadPool.h"
#include "InputHandler.h"
#include "OutputEmitter.h"

class StreamProcessor {

public:
    static Buffer<Data> *buffer;
    static Processor *processor;
    static Window *window;
    void initialize(int T_NUM);
    //static OutputEmitter *outputEmitter;

private:
    ThreadPool *threadPool;
    //InputHandler *inputHandler;

};


#endif //STREAMPROCESSORLLVM_TP_STREAMPROCESSOR_H
