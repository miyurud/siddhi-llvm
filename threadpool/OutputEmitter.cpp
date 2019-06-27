//
// Created by chrustkiran on 6/13/19.
//

#include "OutputEmitter.h"
#include "StreamProcessor.h"
#include "Benchmark.h"
#include <iostream>

void OutputEmitter::emitData() {
   Benchmark::calcLatency((std::chrono::high_resolution_clock::now() - StreamProcessor::processor->getOutputs().getIijTime()).count());
}