//
// Created by tharsanan on 4/26/19.
//

#ifndef STREAM_PROCESSOR_PERFORMANCEMONITOR_H
#define STREAM_PROCESSOR_PERFORMANCEMONITOR_H

#include "chrono"
#include <iostream>

using namespace std;
class PerformanceMonitor {
private:
    static chrono::system_clock::time_point start;
public:
    static void setStart();
    static void getElapsedTime();
};


#endif //STREAM_PROCESSOR_PERFORMANCEMONITOR_H
