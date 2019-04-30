//
// Created by tharsanan on 4/5/19.
//

#ifndef PRODUCERCONSUMER_CONSUMER_H
#define PRODUCERCONSUMER_CONSUMER_H

#include "Buffer.h"

template <class T>
class Consumer {
private:
    Buffer<T>* buffer;


public:
    Consumer(Buffer<T>* buffer1);
    void pop();
};

template <class T>
Consumer<T>::Consumer(Buffer<T>* buffer1){

    buffer = buffer1;
}

template <class T>
void Consumer<T>::pop(){
    buffer->pop();
}

#endif //PRODUCERCONSUMER_CONSUMER_H
