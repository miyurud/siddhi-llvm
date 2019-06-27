//
// Created by chrustkiran on 6/14/19.
//

#ifndef STREAMPROCESSORLLVM_TP_BENCHMARK_H
#define STREAMPROCESSORLLVM_TP_BENCHMARK_H


#include <chrono>
#include <mutex>
#include <fstream>
#include "Data.h"
using namespace std;
class Benchmark {

public:
    static chrono::_V2::high_resolution_clock::time_point veryFirstTime;
    static chrono::_V2::high_resolution_clock::time_point emitEndTime;
    static chrono::_V2::high_resolution_clock::time_point emitPreviousTime;
    static void calcTotalTime(chrono::_V2::high_resolution_clock::time_point currTime , Data data);
    static mutex m_mutex;
    static void calcLatency(long nanoGap);
    static long avgNanoGap;
    static long count;
    static long emitGap;
    static long getAvgNanoGap();
    static ofstream myfile;
    static void prepareFile();
    static long totalRequest;
};


#endif //STREAMPROCESSORLLVM_TP_BENCHMARK_H
