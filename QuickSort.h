#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort{
public:
    vector<int> sort(vector<int> list);
    int partition(vector<int>, int low, int high);
    vector<int> quickSort(vector<int> list, int L, int R);
};

#endif // QUICKSORT_H
