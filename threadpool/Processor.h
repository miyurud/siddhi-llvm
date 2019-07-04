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

#ifndef STREAMPROCESSORLLVM_TP_PROCESSOR_H
#define STREAMPROCESSORLLVM_TP_PROCESSOR_H


#include "Data.h"
#include "functions/Sum.h"

class Processor {
private:
    Sum sum;
    chrono::_V2::high_resolution_clock::time_point iijTime;
public:
    void process(Data event);
    Data getOutputs();
    void reset();
    Processor();
};


#endif //STREAMPROCESSORLLVM_TP_PROCESSOR_H
