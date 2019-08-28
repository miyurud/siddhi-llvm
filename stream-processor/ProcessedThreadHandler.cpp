#include "ProcessedThreadHandler.h"
ProcessedThreadHandler::ProcessedThreadHandler(){
}bool ProcessedThreadHandler::boolArrayWeight1[2] = {true,true};
bool ProcessedThreadHandler::boolArrayWeight2[1] = {true};
bool ProcessedThreadHandler::allSet(int  inputIndex){
switch (inputIndex){
case 0 : 
return !boolArrayWeight1[0] && !boolArrayWeight1[1];
case 1 : 
return !boolArrayWeight2[0];
}
}
void ProcessedThreadHandler::setAllDefault(int  inputIndex){
switch (inputIndex){
case 0 : 
boolArrayWeight1[0] = true;
boolArrayWeight1[1] = true;
break;
case 1 : 
boolArrayWeight2[0] = true;
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
case 1 : 
boolArrayWeight1[1] = value;
 break;
}
case 1 : 
switch (consumerIndex){
case 2 : 
boolArrayWeight2[0] = value;
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
case 1 : 
return boolArrayWeight1[1];
}
case 1 : 
switch (consumerIndex){
case 2 : 
return boolArrayWeight2[0];
}
}
}
