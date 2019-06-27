//
// Created by chrustkiran on 6/13/19.
//

#include "InputHandler.h"
#include "common.h"
#include "Benchmark.h"


void InputHandler::feedData(Buffer<Data> *buffer) {
    for(int i=0;i<Benchmark::totalRequest;i++){
        Data data;
        data.setWeight(i);
        data.setIijTime(getCurrentTime());
        buffer->push(data);
    }
}