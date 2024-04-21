#include "Sort.h"
#include "BubbleSort.h"


int main(){
    BubbleSort sorter;

    vector<int> list{2,4,1,8,5};

    list = sorter.sort(list);
    
    for(auto i:list){
        cout << i << endl;
    }
}