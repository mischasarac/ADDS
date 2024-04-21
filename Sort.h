#ifndef SORT_H
#define SORT_H

#include <vector>
#include <iostream>
using namespace std;

class Sort {
public:
    virtual vector<int> sort(vector<int> list) = 0;
};

#endif // SORT_H
