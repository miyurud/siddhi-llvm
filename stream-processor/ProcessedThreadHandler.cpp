#include "ProcessedThreadHandler.h"
ProcessedThreadHandler::ProcessedThreadHandler(){
}bool ProcessedThreadHandler::boolArrayWeight1[1] = {true};
bool ProcessedThreadHandler::allSet(int  inputIndex){
switch (inputIndex){
case 0 : 
return !boolArrayWeight1[0];
}
}
void ProcessedThreadHandler::setAllDefault(int  inputIndex){
switch (inputIndex){
case 0 : 
boolArrayWeight1[0] = true;
break;
}
}
void ProcessedThreadHandler::setValueForInputAndConsumer(bool value,int consumerIndex,int  inputIndex){
switch (inputIndex){
case 0 : 
switch (consumerIndex){
case 0 : 
boolArrayWeight1[0] = value;
 break;
}
}
}
bool ProcessedThreadHandler::getValueForInputAndConsumer(int consumerIndex,int  inputIndex){
switch (inputIndex){
case 0 : 
switch (consumerIndex){
case 0 : 
return boolArrayWeight1[0];
}
}
}
