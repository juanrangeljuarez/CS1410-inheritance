//
// Created by juan on 10/17/17.
//

#ifndef INHERITANCE_DISTANCE_H
#define INHERITANCE_DISTANCE_H


#include <ostream>
enum posneg{pos, neg}; // For sing in DistSign

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance();

    Distance(int feet, float inches);

    int getFeet() const;

    float getInches() const;

    void setFeet(int feet);

    void setInches(float inches);

    bool operator==(const Distance &rhs) const;

    bool operator!=(const Distance &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Distance &distance);

};

class DistSign: public Distance
{
private:
    posneg  sign;   // sign is pos or neg
public:
    DistSign();

    DistSign(int feet, float inches, posneg sign);

    posneg getSign() const;

    void setSign(posneg sign);

    friend std::ostream &operator<<(std::ostream &os, const DistSign &sign);

};



#endif //INHERITANCE_DISTANCE_H
