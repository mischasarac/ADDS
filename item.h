#ifndef ITEM_H
#define ITEM_H


#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

template<typename T>
class itemParent{
    unordered_map<T,int> holdSpecific;
public:
    void addSpecItem(T object) = 0;
    T removeSpecItem(T object) = 0;
};

#endif // ITEM_H
