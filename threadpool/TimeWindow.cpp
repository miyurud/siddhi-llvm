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

#include "TimeWindow.h"
#include "common.h"

void TimeWindow::checkInputEvent() {
    unique_lock<mutex> m_lock(m_mutex);

    if(inputCounter == 0){
        initialTime = getCurrentTimeinMilli();
        lastThreadGone = false;
    }
    long intervalofEvent = getCurrentTimeinMilli() - initialTime;


    while((intervalofEvent >= this->condVariable*1000 ) and this->lastThreadGone){
        m_condition.wait(m_lock);
    }

    this->inputCounter++;
    if((intervalofEvent) >= condVariable*1000 ){
        totalInput = inputCounter;
        lastThreadGone = true;
    }

    m_lock.unlock();
}
