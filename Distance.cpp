//
// Created by juan on 10/17/17.
//

#include "Distance.h"

Distance::Distance(int feet, float inches) : feet(feet), inches(inches) {}

Distance::Distance(): feet(0), inches(0) {}

int Distance::getFeet() const {
    return feet;
}

float Distance::getInches() const {
    return inches;
}

void Distance::setFeet(int feet) {
    Distance::feet = feet;
}

void Distance::setInches(float inches) {
    Distance::inches = inches;
}

bool Distance::operator==(const Distance &rhs) const {
    return feet == rhs.feet &&
           inches == rhs.inches;
}

bool Distance::operator!=(const Distance &rhs) const {
    return !(rhs == *this);
}

std::ostream &operator<<(std::ostream &os, const Distance &distance) {
    os << "feet is : " << distance.feet << " inches: " << distance.inches;
    return os;
}

DistSign::DistSign()
{
    sign = pos;
}

DistSign::DistSign(int feet, float inches, posneg sign) : Distance(feet, inches), sign(sign) {}

std::ostream &operator<<(std::ostream &os, const DistSign &sign) {
    os << static_cast<const Distance &>(sign) << " sign: " << sign.sign;
    return os;
}
