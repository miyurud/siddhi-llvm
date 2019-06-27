//
// Created by chrustkiran on 6/17/19.
//

#ifndef STREAMPROCESSORLLVM_TP_LENGTHWINDOW_H
#define STREAMPROCESSORLLVM_TP_LENGTHWINDOW_H


#include "Window.h"

class LengthWindow :public  Window{


public:
    void checkInputEvent();
    LengthWindow();
};


#endif //STREAMPROCESSORLLVM_TP_LENGTHWINDOW_H
