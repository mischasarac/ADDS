#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include <iostream>
#include <string>
#include <math.h>
#include <list>

using namespace std;


class BigNumCalc {
public:
    list<int> buildBigNum(string numString);

    std::list<int> add(std::list<int> num1, std::list<int> num2);
    std::list<int> sub(std::list<int> num1, std::list<int> num2);
    std::list<int> mul(std::list<int> num1, std::list<int> num2);

};


#endif // BIGNUMCALC_H
