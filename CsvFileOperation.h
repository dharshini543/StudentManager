#ifndef CSVFILEOPERATION_H
#define CSVFILEOPERATION_H

#include "FileOperation.h"

class CsvFileOperation : public FileOperation
{
public:
    CsvFileOperation();
    list<Student> readData();
};

#endif // CSVFILEOPERATION_H
