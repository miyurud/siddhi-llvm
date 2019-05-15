//
// Created by tharsanan on 4/30/19.
//

#ifndef STREAM_PROCESSOR_WINDOWBUFFERCONTAINER_H
#define STREAM_PROCESSOR_WINDOWBUFFERCONTAINER_H


#include "Buffer.h"

class WindowBufferContainer {
private:
    Buffer<bool> windowBuffer;
public:
    void addToWindowBuffer(bool value);
    bool getFromWindowBuffer();

};


#endif //STREAM_PROCESSOR_WINDOWBUFFERCONTAINER_H
