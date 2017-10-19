//
// Created by juan on 10/19/17.
//

#include "Laborer.h"

void Foreman::setData()
{
    Employee::setData();
    cout << "\nEnter Quotas: ";
    cin >> quotas;
}

void Foreman::getData()
{
    Employee::getData();
    cout << "\nQuotas: " <<quotas<< endl;
}
