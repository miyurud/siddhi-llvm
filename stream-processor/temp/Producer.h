//
// Created by tharsanan on 4/5/19.
//

#ifndef PRODUCERCONSUMER_PRODUCER_H
#define PRODUCERCONSUMER_PRODUCER_H


#include "Buffer.h"
#include "vector"

using namespace std;

template <class T>
class Producer {
private:
    vector<Buffer<T>*> * dataBuffers;

public:
    Producer(vector<Buffer<T>*> * dataBuffers1);
    void push(T value);
};

template <class T>
Producer<T>::Producer(vector<Buffer<T>*> * dataBuffers1){
    dataBuffers = dataBuffers1;
}

template <class T>
void Producer<T>::push(T value){

}

#endif //PRODUCERCONSUMER_PRODUCER_H
