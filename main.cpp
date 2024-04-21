#include <bits/stdc++.h>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main() {
  vector<int> list;
  string line;
  getline(cin, line);
  stringstream ss(line);
  int i;
  while (ss >> i) {
    list.push_back(i);
  }

  QuickSort qs;
  vector<int> sorted = qs.sort(list);

  RecursiveBinarySearch rbs;
  bool found = rbs.search(sorted, 1);
  cout<< (found ? "true " : "false ");
  
  for (size_t i = 0; i < sorted.size(); i++) {
    cout << sorted[i] << " ";
  }
  cout << endl;

  return 0;
}