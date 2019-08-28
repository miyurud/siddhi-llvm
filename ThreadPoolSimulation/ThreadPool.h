//
// Created by tharsanan on 8/2/19.
//

#ifndef MOCKSPFORLLVMOPTIMIZATION_THREADPOOL_H
#define MOCKSPFORLLVMOPTIMIZATION_THREADPOOL_H

#include <thread>
#include <queue>
#include <condition_variable>
#include "Task.h"

using namespace std;
class ThreadPool {
    condition_variable m_condVar;
    condition_variable waitOnExecution;
    mutex mutexForPopPushLock;
    mutex workingStatusUpdate;
    queue<Task> taskQueue;
    int finishedThreadsCount;
    bool isWorking;
    int poolSize;
    int taskPerRound;
public:
    ThreadPool(int size);
    void createThreads(int numberOfOutputAttributes, ThreadPool* threadPool);
    void threadTask();
    void addTask(Task task);
    Task getTask();
    bool isTaskQueueEmpty();
    bool areThreadsWorking();
    void setThreadPoolWorking();
    void releaseMeWhenFinished();
};


#endif //MOCKSPFORLLVMOPTIMIZATION_THREADPOOL_H
