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

//
// Created by tharsanan on 4/28/19.
//

#ifndef STREAM_PROCESSOR_PROCESSEDTHREADHANDLER_H
#define STREAM_PROCESSOR_PROCESSEDTHREADHANDLER_H


class ProcessedThreadHandler {
private:
    static bool array0[2];
    static bool array1[1];
public:
    static bool getValueForInputAndConsumer(int inputIndex, int consumerIndex);
    static void setValueForInputAndConsumer(int inputIndex, int consumerIndex, bool value);
    static void setAllDefault(int inputIndex);

    static bool allSet(int inputIndex);
};


#endif //STREAM_PROCESSOR_PROCESSEDTHREADHANDLER_H
