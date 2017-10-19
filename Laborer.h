//
// Created by juan on 10/19/17.
//

#ifndef INHERITANCE_LABORER_H
#define INHERITANCE_LABORER_H


#include "Employee.h"

class Laborer : public Employee
{


};
class Foreman : public Laborer
{
private:
    float quotas;  // percent of quotas
public:
    void setData();
    void getData();
};

#endif //INHERITANCE_LABORER_H
