//
// Created by chrustkiran on 6/17/19.
//

#ifndef STREAMPROCESSORLLVM_TP_TIMEWINDOW_H
#define STREAMPROCESSORLLVM_TP_TIMEWINDOW_H


#include "Window.h"

class TimeWindow : public Window {

private:
    bool lastThreadGone = false;
public:
    void checkInputEvent();
    long initialTime;

};


#endif //STREAMPROCESSORLLVM_TP_TIMEWINDOW_H
