//
// Created by tharsanan on 4/23/19.
//

#ifndef STREAM_PROCESSOR_SUM_H
#define STREAM_PROCESSOR_SUM_H

template <class T>
class Sum {
private:
    T total;
public:
    T getSum(T value);
};

template <class T>
T Sum<T>::getSum(T value){
    total = total + value;
    return total;
}

#endif //STREAM_PROCESSOR_SUM_H
