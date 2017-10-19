//
// Created by juan on 10/19/17.
//

#include "Manager.h"

void Manager::setData()
{
    Employee::setData();
    cout << "\nEnter your title: ";
    cin >> title;
    cin.ignore();
    cout << "\nEnter golf club dues: ";
    cin >> dues;
    cin.ignore();
    Student::setEducation();
}

void Manager::getData()
{
    Employee::getData();
    cout << "\nTitle: " << title;
    cout << "\nGolf dues: "<< dues;
    Student::getEducation();
}
