#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(vector<int> arr, int target) {
  int size = arr.size();
  if (size == 0) {
    return false;
  }
  int mid = size/2;
  if (arr[mid] == target) {
    return true;
  }
  if (arr[mid] > target) {
    vector<int> left(arr.begin(), arr.begin() + mid);
    return search(left, target);
  } else {
    vector<int> right(arr.begin() + mid + 1, arr.end());
    return search(right, target);
  }
}
