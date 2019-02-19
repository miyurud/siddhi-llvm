//
// Created by tharsanan on 2/2/19.
//

#ifndef STREAM_PROCESSOR_DEFINITIONSTREAM_H
#define STREAM_PROCESSOR_DEFINITIONSTREAM_H


#include <map>
#include "Annotation.h"
class DefinitionStream {

public:
    std::map<std::string, std::string> parameters;

    void addParam(std::string name, std::string type);

    std::map<std::string, std::string> getParameters() ;

    Annotation getAnnotation();

    void setAnnotation(Annotation annotation);

    std::string getSource();

    void setSource(std::string source);

    Annotation annotation;

    std::string source;
};


#endif //STREAM_PROCESSOR_DEFINITIONSTREAM_H
