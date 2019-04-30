//
// Created by tharsanan on 4/17/19.
//

#ifndef STREAM_PROCESSOR_BUFFERLOCKER_H
#define STREAM_PROCESSOR_BUFFERLOCKER_H

#include <iostream>
#include "thread"
#include <mutex>
#include <condition_variable>
#include "DetailContainer.h"
#include "ProcessedThreadHandler.h"

using namespace std;

class BufferLocker {
private:
    static condition_variable m_condVar[constants::inputAttributeCount];
    static vector<int> processedConsumerList[constants::inputAttributeCount];

public:
    static mutex cout_mutex;
    static mutex mutexForPopPushLock[constants::inputAttributeCount];
    static bool canPopData(int inputIndex, int consumerIndex,unique_lock<mutex>* locker);
    static bool isNew(vector<int> vec, int val);
    static mutex* getCoutLock();

};




#endif //STREAM_PROCESSOR_BUFFERLOCKER_H
