//
// Created by chrustkiran on 6/13/19.
//

#include "Window.h"
#include "StreamProcessor.h"

/*
void Window::checkInputEvent() {
    unique_lock<mutex> m_lock(m_mutex);
    while(this->inputCounter >= this->condVariable){
        m_condition.wait(m_lock);
    }

    this->inputCounter++;

    //implemented for time window
   */
/* if(inputCounter == condVariable){
        testVar = inputCounter;
    }*//*

    m_lock.unlock();
}
*/

long Window::getCondVariable() const {
    return condVariable;
}

void Window::setCondVariable(long condVariable) {
    this->condVariable = condVariable;
}


void Window::checkOutputEvent() {
    unique_lock<mutex> m_lock_out(m_mutex);
    this->outputCounter++;
    if(this->outputCounter == this->totalInput){
        OutputEmitter::emitData();
        StreamProcessor::processor->reset();
        this->inputCounter = 0;
        this->outputCounter = 0;
        this->m_condition.notify_all();
    }
    m_lock_out.unlock();

}