//
// Created by chrustkiran on 6/12/19.
//

#include "ThreadPool.h"
#include "StreamProcessor.h"
#include "TimeWindow.h"
#include "common.h"
#include "Benchmark.h"

void ThreadPool::processEvent() {
    while(true) {
        StreamProcessor::window->checkInputEvent();
        Data data = StreamProcessor::buffer->pop();
        data.setIijTime(getCurrentTime());
        StreamProcessor::processor->process(data);
        StreamProcessor::window->checkOutputEvent();
    }
}

void ThreadPool::inputFeed() {
    Benchmark::prepareFile();
    Benchmark::veryFirstTime = getCurrentTime();
    Benchmark::emitPreviousTime = Benchmark::veryFirstTime;
    InputHandler::feedData(StreamProcessor::buffer);
}



void ThreadPool::initializeThreads(int T_NUM) {
    thread pthreads[T_NUM];

    thread inputThread;

    inputThread = thread(&ThreadPool::inputFeed, this);

    for (int i = 0; i < T_NUM; i++) {
        pthreads[i] = thread(&ThreadPool::processEvent,this);
    }
    for (int i = 0; i < T_NUM; ++i) {
        pthreads[i].join();
    }
    inputThread.join();
}