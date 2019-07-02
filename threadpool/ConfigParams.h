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

#ifndef STREAMPROCESSORLLVM_TP_CONFIGPARAMS_H
#define STREAMPROCESSORLLVM_TP_CONFIGPARAMS_H


class ConfigParams {
private:
    static int maxBufferSize;
    static int poolSize;

public:
    static void setMaxBufferSize(int value);
    static void setPoolSize(int val);
    static int getMaxBufferSize();
    static int getPoolSize();
};


#endif //STREAMPROCESSORLLVM_TP_CONFIGPARAMS_H
