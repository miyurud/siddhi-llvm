#include "BufferContainer.h"

BufferContainer::BufferContainer() {
}

mutex BufferContainer::mutexForPopPushLock[constants::inputAttributeCount];

void BufferContainer::pushWeight1Buffer(int value) {
    weight1Buffer.push(value);
}

int BufferContainer::getFromWeight1Buffer(int consumerIndex) {
    unique_lock<mutex> lock(mutexForPopPushLock[0]);
    if (BufferLocker::canPopData(0, consumerIndex, &lock)) {
        return weight1Buffer.pop();
    } else {
        return weight1Buffer.front();
    }
}

void BufferContainer::pushWeight2Buffer(int value) {
    weight2Buffer.push(value);
}

int BufferContainer::getFromWeight2Buffer(int consumerIndex) {
    unique_lock<mutex> lock(mutexForPopPushLock[1]);
    if (BufferLocker::canPopData(1, consumerIndex, &lock)) {
        return weight2Buffer.pop();
    } else {
        return weight2Buffer.front();
    }
}

void BufferContainer::pushWeight3Buffer(int value) {
    weight3Buffer.push(value);
}

int BufferContainer::getFromWeight3Buffer(int consumerIndex) {
    unique_lock<mutex> lock(mutexForPopPushLock[2]);
    if (BufferLocker::canPopData(2, consumerIndex, &lock)) {
        return weight3Buffer.pop();
    } else {
        return weight3Buffer.front();
    }
}

void BufferContainer::pushWeight4Buffer(int value) {
    weight4Buffer.push(value);
}

int BufferContainer::getFromWeight4Buffer(int consumerIndex) {
    unique_lock<mutex> lock(mutexForPopPushLock[3]);
    if (BufferLocker::canPopData(3, consumerIndex, &lock)) {
        return weight4Buffer.pop();
    } else {
        return weight4Buffer.front();
    }
}

void BufferContainer::processLogic0() {
    int weight1 = getFromWeight1Buffer(0);
    Executor::executeWeight1(weight1);
}

void BufferContainer::processLogic1() {
    int weight2 = getFromWeight2Buffer(1);
    Executor::executeTotalWeight2(weight2);
}

void BufferContainer::processLogic2() {
    int weight3 = getFromWeight3Buffer(2);
    Executor::executeTotalWeight3(weight3);
}

void BufferContainer::processLogic3() {
    int weight4 = getFromWeight4Buffer(3);
    Executor::executeTotalWeight4(weight4);
}

void BufferContainer::executeProcess(int option) {
    switch (option) {
        case 0 :
            processLogic0();
            break;
        case 1 :
            processLogic1();
            break;
        case 2 :
            processLogic2();
            break;
        case 3 :
            processLogic3();
            break;
    }
}

int BufferContainer::getFromWeight1OutputBuffer() {
    return weight1OutputBuffer.pop();

}

void BufferContainer::pushWeight1OutputBuffer(int value) {
    weight1OutputBuffer.push(value);
}

long BufferContainer::getFromTotalWeight2OutputBuffer() {
    return totalWeight2OutputBuffer.pop();

}

void BufferContainer::pushTotalWeight2OutputBuffer(long value) {
    totalWeight2OutputBuffer.push(value);
}

long BufferContainer::getFromTotalWeight3OutputBuffer() {
    return totalWeight3OutputBuffer.pop();

}

void BufferContainer::pushTotalWeight3OutputBuffer(long value) {
    totalWeight3OutputBuffer.push(value);
}

long BufferContainer::getFromTotalWeight4OutputBuffer() {
    return totalWeight4OutputBuffer.pop();

}

void BufferContainer::pushTotalWeight4OutputBuffer(long value) {
    totalWeight4OutputBuffer.push(value);
}
