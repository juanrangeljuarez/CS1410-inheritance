// File: diamond
// Created by Juan Rangel Juarez on 10/19/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants
class A
{
public:
    void func();
};
class B : public A
{

};
class C: public A
{

};
class D:public B, public C
{

};

// Prototypes

// Main Program Program
int main() {
    D objD;
    objD.func(); // ambiguos, won't compile
    return 0;
}
// Function Definitions