//
// Created by chrustkiran on 6/17/19.
//

#include "LengthWindow.h"


LengthWindow::LengthWindow() {

}


void LengthWindow::checkInputEvent() {
    unique_lock<mutex> m_lock(m_mutex);
    while(this->inputCounter >= this->condVariable){
        m_condition.wait(m_lock);
    }

    this->inputCounter++;

    //implemented for time window
    if(inputCounter == condVariable){
        totalInput = inputCounter;
    }
    m_lock.unlock();
}