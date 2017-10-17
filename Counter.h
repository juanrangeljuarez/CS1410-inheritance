//
// Created by juan on 10/17/17.
//

#ifndef INHERITANCE_COUNTER_H
#define INHERITANCE_COUNTER_H


class Counter
{
// count
protected:
    unsigned int count;
public:
    Counter(); // Constructor No arguments

    Counter(unsigned int count); // Const. One argument
    unsigned int getCount() const;  //
    void setCount(unsigned int count);
    Counter operator ++();

};

class CountDn : public Counter // derived class
{
public:
    CountDn();

    CountDn(unsigned int count);

    Counter operator--();
};

#endif //INHERITANCE_COUNTER_H
