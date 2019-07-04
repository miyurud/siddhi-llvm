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

#ifndef STREAMPROCESSORLLVM_TP_WINDOW_H
#define STREAMPROCESSORLLVM_TP_WINDOW_H

#include <condition_variable>
#include <mutex>

using namespace std;

class Window {


protected:
    long condVariable = 0;   //length or duration in second
    int inputCounter = 0;
    int outputCounter = 0;
    int totalInput = 0;
    condition_variable m_condition;
    mutex m_mutex;

public:
    virtual void checkInputEvent() = 0;

    void checkOutputEvent();

    long getCondVariable() const;

    void setCondVariable(long condVariable);


};


#endif //STREAMPROCESSORLLVM_TP_WINDOW_H
