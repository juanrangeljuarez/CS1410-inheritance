//
// Created by juan on 10/19/17.
//

#ifndef INHERITANCE_EMPLOYEE_H
#define INHERITANCE_EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    unsigned long number;    // employee ID
public:
    void setData();
    void getData();

};


#endif //INHERITANCE_EMPLOYEE_H
