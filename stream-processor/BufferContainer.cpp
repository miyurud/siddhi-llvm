#include "BufferContainer.h"
BufferContainer::BufferContainer(){
}mutex BufferContainer::mutexForPopPushLock[constants::inputAttributeCount];
void BufferContainer::pushWeight1Buffer(int value){
weight1Buffer.push(value);
}
int BufferContainer::getFromWeight1Buffer(int consumerIndex){
unique_lock<mutex> lock(mutexForPopPushLock[0]);
if(BufferLocker::canPopData(0, consumerIndex, &lock)){
return weight1Buffer.pop();
}
else{
return weight1Buffer.front();
}
}
void BufferContainer::processLogic0(){
int weight1 = getFromWeight1Buffer(0);
Executor::executeWeight1(weight1 );
}
void BufferContainer::executeProcess(int option){
switch(option) {
case 0 : processLogic0();
break;
}
}
int BufferContainer::getFromWeight1OutputBuffer(){
return weight1OutputBuffer.pop();

}
void BufferContainer::pushWeight1OutputBuffer(int value){
weight1OutputBuffer.push(value);
}
