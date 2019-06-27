//
// Created by chrustkiran on 6/17/19.
//

#include "TimeWindow.h"
#include "common.h"

void TimeWindow::checkInputEvent() {
    unique_lock<mutex> m_lock(m_mutex);

    if(inputCounter == 0){
        initialTime = getCurrentTimeinMilli();
        lastThreadGone = false;
    }
    long intervalofEvent = getCurrentTimeinMilli() - initialTime;


    while((intervalofEvent >= this->condVariable*1000 ) and this->lastThreadGone){
        m_condition.wait(m_lock);
    }

    this->inputCounter++;
    if((intervalofEvent) >= condVariable*1000 ){
        totalInput = inputCounter;
        lastThreadGone = true;
    }

    m_lock.unlock();
}