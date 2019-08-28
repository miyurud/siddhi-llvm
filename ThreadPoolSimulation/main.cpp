#include <iostream>
#include <fstream>
#include "Task.h"
#include "ThreadPool.h"

void squareFunc(int i, int* target){
    for (int j = 0; j < 10000; ++j) {

    }
    *target = i*i;
}
void prevFunc(int i, int* target){
    for (int j = 0; j < 10000; ++j) {

    }
    *target = i - 1;
}
void nextFunc(int i, int* target){
    for (int j = 0; j < 10000; ++j) {

    }
    *target = i + 1;
}

void writeToFile(int i){
    ofstream myFile;
    myFile.open("example.txt");
    myFile << i << "\n";
    myFile.close();
}

int main(int argc, char *argv[]) {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    if(argc == 7){
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        num3 = atoi(argv[3]);
        num4 = atoi(argv[4]);
        num5 = atoi(argv[5]);
        num6 = atoi(argv[6]);
    }
    else{
        return 1;
    }
    int attrCount = num1 + num2 + num3 + num4 + num5 + num6;
    std::cout << "Hello, World!" << std::endl;
    ThreadPool* threadPool = new ThreadPool(3);
    threadPool->createThreads(attrCount, threadPool);

    auto timeNow= std::chrono::system_clock::now();
    for (int i = 0; i < 100; ++i) {
        int source = 3;
        int square;
        int prev;
        int next;
        if(attrCount > 0) {
            threadPool->setThreadPoolWorking();
        }
        Task task3;
        task3.addTask(std::bind(&writeToFile, next));
        if(num1 == 0){
            writeToFile(next);
        }
        else{
            threadPool->addTask(task3);
        }
        if(num2 == 0){
            writeToFile(source);
        }
        else{
            threadPool->addTask(task3);
        }
        if(num3 == 0){
            writeToFile(source);
        }
        else{
            threadPool->addTask(task3);
        }
        if(num4 == 0){
            writeToFile(source);
        }
        else{
            threadPool->addTask(task3);
        }
        if(num5 == 0){
            writeToFile(source);
        }
        else{
            threadPool->addTask(task3);
        }
        if(num6 == 0){
            writeToFile(source);
        }
        else{
            threadPool->addTask(task3);
        }
        if(attrCount > 0) {
            threadPool->releaseMeWhenFinished();
        }

    }
    auto duration= std::chrono::system_clock::now();
    std::cout << (std::chrono::duration_cast<std::chrono::nanoseconds>(duration - timeNow)).count() << " nanoseconds " << std::endl;
    ofstream myFile;
    myFile.open("performanceResult.txt");
    myFile << 1000 << " , "<< (std::chrono::duration_cast<std::chrono::nanoseconds>(duration - timeNow)).count();
    myFile.close();
    return 0;
}