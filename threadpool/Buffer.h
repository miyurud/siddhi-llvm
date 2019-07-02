/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/



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
#include "chrono"
#include "ConfigParams.h"

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
};

template <class T>
Buffer<T>::Buffer(){
    bufferQueue = new queue<T>();
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
    while(bufferQueue->size() >= ConfigParams::getMaxBufferSize()){
        m_condVar.wait_for(locker,chrono::nanoseconds(8));
    }
    bufferQueue->push(value);
    locker.unlock();

//    m_condVar.notify_one();
}


#endif //STREAM_PROCESSOR_BUFFER_H
