#include "StudentManager.h"

StudentManager::StudentManager()
{
    foPtr = NULL;

    cout << "StudentManager constructed" << endl;
}

void StudentManager::create()
{
    int choice = 0;
    cout << "Enter 1 to CSV \n 2 to XML \n 3 to JSON \n 4 to UI \n Any other number to exit" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        foPtr = new CsvFileOperation();
        break;
    case 2:
        foPtr = new XmlFileOperation();
        break;
    case 3:
        foPtr = new JsonFileOperation();
        break;
    default:
        foPtr = NULL;
        break;
    }

}

void StudentManager::initStudents()
{
    cout << "Initializing Student from file operation" << endl;
    if(foPtr != NULL){
        studentsList = foPtr->readData();
        cout << "Student list Updated in StudentManger" << endl;
    }else{
        cout << "Student list update failed as no file operation" << endl;
    }
}
