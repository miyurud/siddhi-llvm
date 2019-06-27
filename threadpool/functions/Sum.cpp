//
// Created by chrustkiran on 6/13/19.
//

#include "Sum.h"


void Sum::calculateSum(int data) {
    unique_lock<mutex> m_lock(m);
    this->total = this->total + data;
    m_lock.unlock();
}

void Sum::reset() {
    this->total = 0;
}

int Sum::getOutput() {
    return this->total;
}