//
// Created by chrustkiran on 6/13/19.
//

#include "Processor.h"
#include "common.h"
#include <iostream>

void Processor::process(Data event) {
    sum.calculateSum(event.getWeight());
    this->iijTime = event.getIijTime();
}

Data Processor::getOutputs() {
    Data data;
    data.setIijTime(this->iijTime);
    data.setWeight(sum.getOutput());
    return data;
}

void Processor::reset() {
    sum.reset();
}

Processor::Processor() {
    //this->sum = new Sum();
}