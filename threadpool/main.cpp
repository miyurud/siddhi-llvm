#include <iostream>
#include "StreamProcessor.h"
#include "common.h"
int main(int argc, const char *args[]) {
    for (int i = 1; i < argc; ++i){
        ConfigParams::setMaxBufferSize(atoi(args[1]));
        ConfigParams::setPoolSize(atoi(args[2]));
    }
    StreamProcessor streamProcessor;
    cout << ConfigParams::getPoolSize() << "\n";
    streamProcessor.initialize(ConfigParams::getPoolSize());
    return 0;
}