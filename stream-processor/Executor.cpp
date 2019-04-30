#include "Executor.h"
Executor::Executor(){
}Sum<long> Executor::sumWeight2TotalWeight2;
Sum<long> Executor::sumWeight3TotalWeight3;
Sum<long> Executor::sumWeight4TotalWeight4;
void Executor::executeWeight1(int weight1){
ExecutorCreator::getBufferContainer()->pushWeight1OutputBuffer(weight1);
}
void Executor::executeTotalWeight2(int weight2){
ExecutorCreator::getBufferContainer()->pushTotalWeight2OutputBuffer(sumWeight2TotalWeight2.getSum(weight2));
}
void Executor::executeTotalWeight3(int weight3){
ExecutorCreator::getBufferContainer()->pushTotalWeight3OutputBuffer(sumWeight3TotalWeight3.getSum(weight3));
}
void Executor::executeTotalWeight4(int weight4){
ExecutorCreator::getBufferContainer()->pushTotalWeight4OutputBuffer(sumWeight4TotalWeight4.getSum(weight4));
}
