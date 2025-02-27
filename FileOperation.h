#ifndef FILEOPERATION_H
#define FILEOPERATION_H

#include "Student.h"
#include <list>
#include <iostream>

using namespace std;

class FileOperation
{
public:
    FileOperation();

    virtual list<Student> readData() = 0;
};

#endif // FILEOPERATION_H
