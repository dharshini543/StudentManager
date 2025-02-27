#ifndef XMLFILEOPERATION_H
#define XMLFILEOPERATION_H

#include "FileOperation.h"

class XmlFileOperation : public FileOperation
{
public:
    XmlFileOperation();
    list<Student> readData();
};

#endif // XMLFILEOPERATION_H
