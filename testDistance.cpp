// File: testDistance
// Created by Juan Rangel Juarez on 10/17/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Distance.h"

using namespace std;


// Prototypes

// Main Program Program
int main() {
    Distance d1, d2(55,0);
    cout << "D1 Count feet is: " << d1.getFeet() << " and inches" << d1.getInches() << endl;
    cout << "D2 Count feet is: " << d2.getFeet() << " and inches" << d2.getInches() << endl;
    d2.setFeet(0);
    cout << d2 << endl;
    if(d1 == d2)
    {
        cout<< "The same" << endl;
    }
    DistSign alpha;
    cout << alpha << endl;
    cout << "NOt the same" << endl;
    return 0;
}
// Function Definitions