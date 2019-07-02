/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

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
