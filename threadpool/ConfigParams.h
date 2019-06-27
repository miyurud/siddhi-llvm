//
// Created by tharsanan on 6/21/19.
//

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
