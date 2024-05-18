#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int kth_largest(vector<int> values, int k){
    priority_queue<int> q;
    // making priority queue
    for(auto i : values){
        q.push(i);
    }

    // finding kth largest element in priority queue
    for(int i = 0; i < k - 1; i++){
        q.pop();
    }

    return q.top();    
}
