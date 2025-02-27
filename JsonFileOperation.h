#ifndef JSONFILEOPERATION_H
#define JSONFILEOPERATION_H

#include "FileOperation.h"

class JsonFileOperation : public FileOperation
{
public:
    JsonFileOperation();
    list<Student> readData();
};

#endif // JSONFILEOPERATION_H
