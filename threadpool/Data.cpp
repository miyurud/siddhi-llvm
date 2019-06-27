//
// Created by chrustkiran on 6/12/19.
//

#include "Data.h"

int Data::getWeight() const {
    return weight;
}

void Data::setWeight(int weight) {
    Data::weight = weight;
}

const std::chrono::_V2::high_resolution_clock::time_point &Data::getIijTime() const {
    return iijTime;
}

void Data::setIijTime(const std::chrono::_V2::high_resolution_clock::time_point &iijTime) {
    Data::iijTime = iijTime;
}