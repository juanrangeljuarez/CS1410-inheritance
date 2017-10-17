//
// Created by juan on 10/17/17.
//

#include "Counter.h"

// Doxygen comments. Type /*! or /** followed by Enter
/*!
 * Counter: Default Constructor
 * @param count : Initial counter
 */
Counter::Counter(unsigned int count) : count(count) {}

/*!
 * Counter: Default Constructor
 */
Counter::Counter(): count(0) {}
/*!
 * getCount: Getter for count variable
 * @return  current count
 */

unsigned int Counter::getCount() const {
    return count;
}
/*!
 * setCount: Set current count
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count) {
    Counter::count = count;
}
/*!
 * ++ Operator: Increments counter
 * @return : ++counter
 */
Counter Counter::operator++()
{
    return Counter(++count);
}
/*!
 * CountDn -- opeartor
 * @return Decrements count
 */

// constructor
Counter CountDn::operator--() {
    return Counter(--count);
}
/*!
 * CountDn Default Constructor
 */

CountDn::CountDn() :Counter(){}
/*!
 * CountDn 1 parameter Constructor
 *
 * @param count Initial Counter
 */

CountDn::CountDn(unsigned int count) : Counter(count) {}

