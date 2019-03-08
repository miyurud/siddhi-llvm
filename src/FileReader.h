//
// Created by tharsanan on 3/3/19.
//

#ifndef STREAM_PROCESSOR_FILEREADER_H
#define STREAM_PROCESSOR_FILEREADER_H

#include "fstream"
using namespace std;
class FileReader {
public:
    void createFile(string fileName, map<std::string, std::string> parameters);
};


#endif //STREAM_PROCESSOR_FILEREADER_H
