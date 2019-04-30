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
