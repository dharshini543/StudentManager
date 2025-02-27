#include "Student.h"

Student::Student() {}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getRollNumber() const
{
    return rollNumber;
}

void Student::setRollNumber(int newRollNumber)
{
    rollNumber = newRollNumber;
}
