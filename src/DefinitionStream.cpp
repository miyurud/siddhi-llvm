//
// Created by tharsanan on 2/2/19.
//

#include "DefinitionStream.h"
using std::string;
void DefinitionStream::addParam(string name, string type) {
    parameters.insert(std::pair<string, string>(name,type));
}

std::map<string, string> DefinitionStream::getParameters() {
    return parameters;
}

Annotation DefinitionStream::getAnnotation() {
    return annotation;
}

void DefinitionStream::setAnnotation(Annotation annotation) {
    DefinitionStream::annotation = annotation;
}

string DefinitionStream::getSource() {
    return source;
}

void DefinitionStream::setSource(string source) {
    DefinitionStream::source = source;
}
