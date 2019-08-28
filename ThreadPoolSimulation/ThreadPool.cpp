//
// Created by tharsanan on 8/2/19.
//


#include "ThreadPool.h"

void ThreadPool::createThreads(int numberOfOutputAttributes, ThreadPool* threadPool) {
    thread t[numberOfOutputAttributes];
    taskPerRound = numberOfOutputAttributes;
    finishedThreadsCount = numberOfOutputAttributes;
    for (int i = 0; i < numberOfOutputAttributes; ++i) {
        t[i] = std::thread(&ThreadPool::threadTask, threadPool);
    }
    for (int i = 0; i < numberOfOutputAttributes; ++i) {
        t[i].detach();
    }
}

void ThreadPool::threadTask() {
    while(true){
        Task taskToExecute = getTask();
        taskToExecute.perform();
        workingStatusUpdate.lock();
        finishedThreadsCount--;
        if(finishedThreadsCount == 0){
            isWorking = false;
            finishedThreadsCount = taskPerRound;
            unique_lock<mutex> locker(mutexForPopPushLock);
            waitOnExecution.notify_all();
            locker.unlock();
        }
        workingStatusUpdate.unlock();
    }
}

void ThreadPool::addTask(Task task) {
    unique_lock<mutex> locker(mutexForPopPushLock);
    taskQueue.push(task);
    locker.unlock();
    m_condVar.notify_one();
}

Task ThreadPool::getTask() {
    unique_lock<mutex> locker(mutexForPopPushLock);
    while (taskQueue.size() == 0){
        m_condVar.wait(locker);
    }
    Task taskLocal = taskQueue.front();
    taskQueue.pop();
    locker.unlock();
    return taskLocal;
}

ThreadPool::ThreadPool(int size) {
    isWorking = true;
    poolSize = size;
}

bool ThreadPool::isTaskQueueEmpty() {
    return taskQueue.size() == 0;
}

void ThreadPool::setThreadPoolWorking() {
    isWorking = true;
}

bool ThreadPool::areThreadsWorking() {
    return isWorking;
}

void ThreadPool::releaseMeWhenFinished() {
    unique_lock<mutex> locker(mutexForPopPushLock);
    while (isWorking){
        waitOnExecution.wait(locker);
    }
    locker.unlock();
}
