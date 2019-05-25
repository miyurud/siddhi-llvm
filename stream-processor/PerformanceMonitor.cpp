//
// Created by tharsanan on 4/26/19.
//

#include "PerformanceMonitor.h"

chrono::system_clock::time_point PerformanceMonitor::start = chrono::system_clock::now();
int PerformanceMonitor::count = 0;
long PerformanceMonitor::avgTimeNano = 0;

void PerformanceMonitor::getElapsedTime(int val) {
    auto elapsedNano = std::chrono::duration_cast<std::chrono::nanoseconds>(chrono::system_clock::now() - start);
    auto elapsedMilli = std::chrono::duration_cast<std::chrono::milliseconds>(chrono::system_clock::now() - start);
    cout << "time taken in milli is : " << elapsedMilli.count() << "\n";
    cout << "time taken in nano is : " << elapsedNano.count() << "\n";
    start = chrono::system_clock::now();

}

void PerformanceMonitor::setStart(int val) {
    start = chrono::system_clock::now();
}

void PerformanceMonitor::getAvgTime(int out) {
    auto now = chrono::system_clock::now();
    if (count == 0) {
        start = chrono::system_clock::now();
        count++;
    } else {
        auto elapsedNano = std::chrono::duration_cast<std::chrono::nanoseconds>(now - start);

        long currentTimeNano = elapsedNano.count();
        avgTimeNano = (((avgTimeNano * (count - 1)) + currentTimeNano) / count);
//        cout <<  "\n one time : " + to_string(elapsedNano.count()) + "avgTime : "  + to_string(avgTimeNano) + "\n";
        count++;

        if (count == 100000) {
            cout << "\n avg time : " + to_string(avgTimeNano) + " " + to_string(currentTimeNano) + " " +
                    to_string(count) + " out : " + to_string(out) + "\n";
        }
        start = chrono::system_clock::now();

    }

}

