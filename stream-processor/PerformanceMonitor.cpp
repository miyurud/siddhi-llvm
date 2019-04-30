//
// Created by tharsanan on 4/26/19.
//

#include "PerformanceMonitor.h"

chrono::system_clock::time_point PerformanceMonitor::start = chrono::system_clock::now();

void PerformanceMonitor::getElapsedTime() {
    auto elapsedNano = std::chrono::duration_cast<std::chrono::nanoseconds>(chrono::system_clock::now() - start);
    auto elapsedMilli = std::chrono::duration_cast<std::chrono::milliseconds>(chrono::system_clock::now() - start);
    cout << "time taken in milli is : " << elapsedMilli.count() << "\n";
    cout << "time taken in nano is : " << elapsedNano.count() << "\n";
    start = chrono::system_clock::now();
}

void PerformanceMonitor::setStart() {
    start = chrono::system_clock::now();
}

