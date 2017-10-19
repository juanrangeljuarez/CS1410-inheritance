//
// Created by juan on 10/19/17.
//

#include "Scientist.h"

void Scientist::setData()
{
    Employee::setData();
    cout << "\nEnter the number of pubs: ";
    cin >> pubs;
}

void Scientist::getData()
{
    Employee::getData();
    cout << "\nNumber of publiccations: "<< pubs << endl;
}
