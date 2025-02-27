#include <iostream>
#include "StudentManager.h"

using namespace std;

int main()
{

    StudentManager studentManager;
    studentManager.create();
    studentManager.initStudents();

    return 0;
}
