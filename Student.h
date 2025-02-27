#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;
class Student
{
public:
    Student();

    string getName() const;
    void setName(const string &newName);

    int getRollNumber() const;
    void setRollNumber(int newRollNumber);

private:
    string name;
    int rollNumber;
};

#endif // STUDENT_H
