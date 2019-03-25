//
// Created by tharsanan on 3/15/19.
//

#include <iostream>
#include "KafkaConsumer.h"

void KafkaConsumer::createFile(string attributeName) {
    ifstream inFile;
    string content = "";
    string subContent;
    string replace_string = "*siddhi-llvm*";
    inFile.open("/home/tharsanan/Tharsanan/FYP/siddhi-llvm/src/source-files-for-generation/consumer");
    if (!inFile) {
        cout << "Unable to open file\n";
        exit(1); // terminate with error
    }

    while (std::getline(inFile, subContent)) {
        content = content + subContent + "\n";
    }
    cout << "content: " << content;
    size_t start_pos = content.find(replace_string);
    attributeName[0] = toupper(attributeName[0]);
    content.replace(start_pos, replace_string.length(), "execution.setInputSource"+attributeName+"(message);\n");
    cout << "content: " << content;
    inFile.close();
    ofstream headerFile1("/home/tharsanan/Tharsanan/FYP/siddhi-llvm/Generated_SP/KafkaConsumer.cpp");
    headerFile1 << content;
    headerFile1.close();
}