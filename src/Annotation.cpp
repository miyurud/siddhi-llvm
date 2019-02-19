//
// Created by tharsanan on 2/2/19.
//

#include "Annotation.h"
void Annotation::addAnnotationElement(string name, string value){
    annotationElements.insert(std::pair<string, string>(name,value));
}

std::map<string, string> Annotation::getAnnotationElements(){
    return annotationElements;
}

void Annotation::setName(string name) {
    annotationName = name;
}

string Annotation::getName(){
    return annotationName;
}