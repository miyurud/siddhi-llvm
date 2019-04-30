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

#include "ProcessedThreadHandler.h"


bool ProcessedThreadHandler::array0[2] = {true,true};
bool ProcessedThreadHandler::array1[1] = {true};

bool ProcessedThreadHandler::getValueForInputAndConsumer(int inputIndex, int consumerIndex) {
    switch (inputIndex){
        case 0 :
            return array0[consumerIndex];
        case 1 :
            switch (consumerIndex){
                case 2 :
                    return array1[0];
            }
    }
    return false;
}

void ProcessedThreadHandler::setValueForInputAndConsumer(int inputIndex, int consumerIndex, bool value) {
    switch (inputIndex){
        case 0 :
            array0[consumerIndex] = value;
            break;
        case 1 :
            switch (consumerIndex){
                case 2 :
                    array1[0] = value;
                    break;
            }
            break;
    }
}

void ProcessedThreadHandler::setAllDefault(int inputIndex) {
    switch(inputIndex){
        case 0 :
            array0[0] = true;
            array0[1] = true;
            break;
        case 1 :
            array1[0] = true;
            break;
    }
}

bool ProcessedThreadHandler::allSet(int inputIndex) {
    switch (inputIndex){
        case 0 : return !array0[0] && !array0[1];
        case 1 : return !array1[0];
    }
}
