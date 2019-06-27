//
// Created by chrustkiran on 6/13/19.
//

#ifndef STREAMPROCESSORLLVM_TP_INPUTHANDLER_H
#define STREAMPROCESSORLLVM_TP_INPUTHANDLER_H


#include "Data.h"
#include "Buffer.h"

class InputHandler {
public:
    static void feedData(Buffer<Data> *buffer);
};


#endif //STREAMPROCESSORLLVM_TP_INPUTHANDLER_H
