#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <list>
#include "Student.h"
#include "FileOperation.h"
#include "CsvFileOperation.h"
#include "XmlFileOperation.h"
#include "JsonFileOperation.h"

using namespace std;
class StudentManager
{
public:
    StudentManager();

    void create();
    void initStudents();
private:
    list<Student> studentsList;
    FileOperation *foPtr;
};

#endif // STUDENTMANAGER_H
