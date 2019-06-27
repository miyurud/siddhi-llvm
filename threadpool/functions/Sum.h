//
// Created by chrustkiran on 6/13/19.
//

#ifndef STREAMPROCESSORLLVM_TP_SUM_H
#define STREAMPROCESSORLLVM_TP_SUM_H

#include <mutex>

using namespace std;
class Sum {

public:

    void calculateSum(int data);
    void reset();
    int getOutput();

private:
    mutex m;
    int total=0;
};


#endif //STREAMPROCESSORLLVM_TP_SUM_H
