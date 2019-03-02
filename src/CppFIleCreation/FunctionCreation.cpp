//
// Created by tharsanan on 3/2/19.
//

#include "FunctionCreation.h"

string FunctionCreation::createMethodLineForFunction(string ref, string attribute){
    string linesString;
    string reference = attribute;
    reference[0] = toupper(attribute[0]);
    if(ref == "sum"){
        linesString += "\treturn inputSource.sum" + reference + "\n";
    }
    return linesString;
}