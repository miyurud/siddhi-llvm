//
// Created by chrustkiran on 6/12/19.
//
#ifndef STREAMPROCESSORLLVM_TP_DATA_H
#define STREAMPROCESSORLLVM_TP_DATA_H

#include <iostream>
#include <chrono>

class Data {
public:
    int getWeight() const;

    void setWeight(int weight);

    const std::chrono::_V2::high_resolution_clock::time_point &getIijTime() const;

    void setIijTime(const std::chrono::_V2::high_resolution_clock::time_point &iijTime);


private:
    int weight;
    std::chrono::_V2::high_resolution_clock::time_point iijTime;

};


#endif //STREAMPROCESSORLLVM_TP_DATA_H