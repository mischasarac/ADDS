#include "BubbleSort.h"

vector<int> BubbleSort::sort(vector<int> list){
    int maxPoint = list.size();
    for(int i = 0; i < list.size(); i++){
        for(int j = 0; j < maxPoint-1; j++){
            if(list[j] > list[j+1]){
                swap(list[j], list[j+1]);
            }
        }
        maxPoint--;
    }

    return list;

}