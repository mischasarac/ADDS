#include "QuickSort.h"

vector<int> QuickSort::sort(vector<int> arr) {
  int size = arr.size();
  if (size <= 1) {
    return arr;
  }

  int pivotIndex = size >= 3 ? 2 : 0;
  int pivot = arr[pivotIndex];
  
  vector<int> left;
  vector<int> right;
  
  for (int i = 0; i < size; i++) {
    if (i == pivotIndex) {
      continue;
    }
    if (arr[i] < pivot) {
      left.push_back(arr[i]);
    } else {
      right.push_back(arr[i]);
    }
  }
  
  vector<int> sortedLeft = sort(left);
  vector<int> sortedRight = sort(right);
  sortedLeft.push_back(pivot);
  sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());
  return sortedLeft;
}
