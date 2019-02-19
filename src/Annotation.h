//
// Created by tharsanan on 2/2/19.
//

#ifndef STREAM_PROCESSOR_ANNOTATION_H
#define STREAM_PROCESSOR_ANNOTATION_H

#include <string>
#include <map>

using std::string;
class Annotation {
public:
    string annotationName;
    std::map<string, string> annotationElements;
    void addAnnotationElement(string name, string value);
    std::map<string, string> getAnnotationElements();
    void setName(string name);
    string getName();
};


#endif //STREAM_PROCESSOR_ANNOTATION_H
