//
// Created by tharsanan on 4/5/19.
//

#ifndef STREAM_PROCESSOR_BUFFER_H
#define STREAM_PROCESSOR_BUFFER_H


#include <queue>
#include <thread>
#include <cstdlib>
#include <stdexcept>
#include <mutex>
#include <condition_variable>
#include <zconf.h>
#include "iostream"
#include "BufferLocker.h"
#include "chrono"
using namespace std;

template <class T>
class Buffer{
private:
    condition_variable m_condVar;
    mutex mutexForPopPushLock;
    queue<T>* bufferQueue;
public:
    Buffer();
    T back();
    T front();
    T pop();
    void push(T const&);
    long max;
};

template <class T>
Buffer<T>::Buffer(){
    bufferQueue = new queue<T>();
    max = 0;
}

template <class T>
T Buffer<T>::back(){
    if (bufferQueue->empty()) {
        return -1;
    }
    return bufferQueue->back();
}

template <class T>
T Buffer<T>::front(){
    unique_lock<mutex> locker(mutexForPopPushLock);
    while(bufferQueue->empty()){
//        m_condVar.wait_for(locker,1ms);
//        m_condVar.wait(locker);
        m_condVar.wait_for(locker,chrono::nanoseconds(8));
    }
    T value = bufferQueue->front();
    locker.unlock();
    return value;
}

template <class T>
T Buffer<T>::pop(){
    unique_lock<mutex> locker(mutexForPopPushLock);
    while(bufferQueue->empty()){
        m_condVar.wait_for(locker,chrono::nanoseconds(8));
//        m_condVar.wait_for(locker,1ms);
//        m_condVar.wait(locker);
    }

    T value = bufferQueue->front();
    bufferQueue->pop();
    locker.unlock();
    return value;
}

template <class T>
void Buffer<T>::push(T const& value){

    unique_lock<mutex> locker(mutexForPopPushLock);

    bufferQueue->push(value);
    locker.unlock();
    if(max < this->bufferQueue->size()){
        max = this->bufferQueue->size();
    }
//    m_condVar.notify_one();
}


#endif //STREAM_PROCESSOR_BUFFER_H
