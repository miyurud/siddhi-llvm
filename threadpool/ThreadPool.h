//
// Created by chrustkiran on 6/12/19.
//

#ifndef STREAMPROCESSORLLVM_TP_THREADPOOL_H
#define STREAMPROCESSORLLVM_TP_THREADPOOL_H


#include "Buffer.h"
#include "Data.h"
#include <thread>

class ThreadPool {

private:
    void processEvent();
    void inputFeed();


public:
    void initializeThreads(int T_NUM);
};


#endif //STREAMPROCESSORLLVM_TP_THREADPOOL_H
