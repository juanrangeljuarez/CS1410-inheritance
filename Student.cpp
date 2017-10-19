//
// Created by juan on 10/19/17.
//

#include "Student.h"

void Student::setEducation()
{
    cout << "\nEnter name of school or university";
    cin >> school;
    cin.ignore();
    cout << "\nEnter highest degree earned\n";
    cout << "(High School, BS, Master, Ph.D)";
    cin >> degree;
    cin.ignore();
}

void Student::getEducation()
{
    cout<<"\nSchool or University: " << school << endl;
    cout << "Highest degree earned: " << degree;
}
