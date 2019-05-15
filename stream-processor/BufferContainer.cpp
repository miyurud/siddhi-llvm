#include "BufferContainer.h"
BufferContainer::BufferContainer(){
}mutex BufferContainer::mutexForPopPushLock[constants::inputAttributeCount];
void BufferContainer::pushWeight1Buffer(string value){
weight1Buffer.push(value);
}
string BufferContainer::getFromWeight1Buffer(int consumerIndex){
unique_lock<mutex> lock(mutexForPopPushLock[0]);
if(BufferLocker::canPopData(0, consumerIndex, &lock)){
return weight1Buffer.pop();
}
else{
return weight1Buffer.front();
}
}
void BufferContainer::pushWeight2Buffer(string value){
weight2Buffer.push(value);
}
string BufferContainer::getFromWeight2Buffer(int consumerIndex){
unique_lock<mutex> lock(mutexForPopPushLock[1]);
if(BufferLocker::canPopData(1, consumerIndex, &lock)){
return weight2Buffer.pop();
}
else{
return weight2Buffer.front();
}
}
void BufferContainer::pushWeight3Buffer(string value){
weight3Buffer.push(value);
}
string BufferContainer::getFromWeight3Buffer(int consumerIndex){
unique_lock<mutex> lock(mutexForPopPushLock[2]);
if(BufferLocker::canPopData(2, consumerIndex, &lock)){
return weight3Buffer.pop();
}
else{
return weight3Buffer.front();
}
}
void BufferContainer::pushWeight4Buffer(string value){
weight4Buffer.push(value);
}
string BufferContainer::getFromWeight4Buffer(int consumerIndex){
unique_lock<mutex> lock(mutexForPopPushLock[3]);
if(BufferLocker::canPopData(3, consumerIndex, &lock)){
return weight4Buffer.pop();
}
else{
return weight4Buffer.front();
}
}
void BufferContainer::processLogic0(){
string weight1 = getFromWeight1Buffer(0);
Executor::executeTotalWeight1(weight1 );
}
void BufferContainer::processLogic1(){
string weight2 = getFromWeight2Buffer(1);
Executor::executeTotalWeight2(weight2 );
}
void BufferContainer::processLogic2(){
string weight3 = getFromWeight3Buffer(2);
Executor::executeTotalWeight3(weight3 );
}
void BufferContainer::processLogic3(){
string weight4 = getFromWeight4Buffer(3);
Executor::executeTotalWeight4(weight4 );
}
void BufferContainer::executeProcess(int option){
switch(option) {
case 0 : processLogic0();
break;
case 1 : processLogic1();
break;
case 2 : processLogic2();
break;
case 3 : processLogic3();
break;
}
}
int BufferContainer::getFromTotalWeight1OutputBuffer(){
return totalWeight1OutputBuffer.pop();

}
void BufferContainer::pushTotalWeight1OutputBuffer(int value){
totalWeight1OutputBuffer.push(value);
}
int BufferContainer::getFromTotalWeight2OutputBuffer(){
return totalWeight2OutputBuffer.pop();

}
void BufferContainer::pushTotalWeight2OutputBuffer(int value){
totalWeight2OutputBuffer.push(value);
}
int BufferContainer::getFromTotalWeight3OutputBuffer(){
return totalWeight3OutputBuffer.pop();

}
void BufferContainer::pushTotalWeight3OutputBuffer(int value){
totalWeight3OutputBuffer.push(value);
}
int BufferContainer::getFromTotalWeight4OutputBuffer(){
return totalWeight4OutputBuffer.pop();

}
void BufferContainer::pushTotalWeight4OutputBuffer(int value){
totalWeight4OutputBuffer.push(value);
}
