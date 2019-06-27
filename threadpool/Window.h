//
// Created by chrustkiran on 6/13/19.
//

#ifndef STREAMPROCESSORLLVM_TP_WINDOW_H
#define STREAMPROCESSORLLVM_TP_WINDOW_H

#include <condition_variable>
#include <mutex>

using namespace std;

class Window {


protected:
    long condVariable = 0;   //length or duration in second
    int inputCounter = 0;
    int outputCounter = 0;
    int totalInput = 0;
    condition_variable m_condition;
    mutex m_mutex;

public:
    virtual void checkInputEvent() = 0;

    void checkOutputEvent();

    long getCondVariable() const;

    void setCondVariable(long condVariable);


};


#endif //STREAMPROCESSORLLVM_TP_WINDOW_H
