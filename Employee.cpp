//
// Created by juan on 10/19/17.
//

#include "Employee.h"

void Employee::setData()
{
    cout << "\nEnter last name: ";
    cin >> name;
    cin.ignore();
    cout << "\nEnter ID number: ";
    cin >> number;

}

void Employee::getData()
{
    cout << "\nName: "<< name;
    cout << "\nIDnumber: "<< number;
}
