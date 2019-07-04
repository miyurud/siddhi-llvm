/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

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
