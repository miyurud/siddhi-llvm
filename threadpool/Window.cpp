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

#include "Window.h"
#include "StreamProcessor.h"


long Window::getCondVariable() const {
    return condVariable;
}

void Window::setCondVariable(long condVariable) {
    this->condVariable = condVariable;
}


void Window::checkOutputEvent() {
    unique_lock<mutex> m_lock_out(m_mutex);
    this->outputCounter++;
    if(this->outputCounter == this->totalInput){
        OutputEmitter::emitData();
        StreamProcessor::processor->reset();
        this->inputCounter = 0;
        this->outputCounter = 0;
        this->m_condition.notify_all();
    }
    m_lock_out.unlock();

}
