//
// Created by tharsanan on 4/28/19.
//

#ifndef STREAM_PROCESSOR_PROCESSEDTHREADHANDLER_H
#define STREAM_PROCESSOR_PROCESSEDTHREADHANDLER_H


class ProcessedThreadHandler {
private:
    static bool array0[2];
    static bool array1[1];
public:
    static bool getValueForInputAndConsumer(int inputIndex, int consumerIndex);
    static void setValueForInputAndConsumer(int inputIndex, int consumerIndex, bool value);
    static void setAllDefault(int inputIndex);

    static bool allSet(int inputIndex);
};


#endif //STREAM_PROCESSOR_PROCESSEDTHREADHANDLER_H
