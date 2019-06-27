//
// Created by tharsanan on 6/21/19.
//

#include "ConfigParams.h"

int ConfigParams::maxBufferSize = 1000;
int ConfigParams::poolSize = 1;

void ConfigParams::setMaxBufferSize(int value) {
    maxBufferSize = value;
}

void ConfigParams::setPoolSize(int val) {
    poolSize = val;
}

int ConfigParams::getMaxBufferSize() {
    return maxBufferSize;
}

int ConfigParams::getPoolSize() {
    return poolSize;
}
