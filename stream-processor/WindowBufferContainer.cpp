//
// Created by tharsanan on 4/30/19.
//

#include "WindowBufferContainer.h"

void WindowBufferContainer::addToWindowBuffer(bool value) {
    windowBuffer.push(value);
}

bool WindowBufferContainer::getFromWindowBuffer() {
    bool value = windowBuffer.front();
    windowBuffer.pop();
    return value;
}


