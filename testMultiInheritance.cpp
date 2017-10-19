// File: testMultiInheritance
// Created by Juan Rangel Juarez on 10/19/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants
class A
{
public:
    void Show();
};

void A::Show()
{
    cout << "Class A\n";
}

class B
{
public:
    void Show();
};

void B::Show()
{
    cout << "Class B\n";
}

class C: public A, public B
{

};
// Prototypes

// Main Program Program
int main() {
    C objC; // object C
    objC.A::Show();
    objC.B::Show();
    return 0;
}
// Function Definitions