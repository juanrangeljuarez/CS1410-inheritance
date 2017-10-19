//
// Created by juan on 10/19/17.
//

#ifndef INHERITANCE_SCIENTIST_H
#define INHERITANCE_SCIENTIST_H


#include "Employee.h"

class Scientist : public Employee
{
private:
    int pubs;
public:
    void setData();
    void getData();
};


#endif //INHERITANCE_SCIENTIST_H
