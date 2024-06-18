#include <iostream>
#include <vector>

using namespace std;


int partition(vector<int> &arr, int low, int high){
    // Pivot third index unless impossible

if(high - low < 3){
    return low;
}

    int pivot = arr[low + (high - low) / 2];
    int i = low - 1;
    int j = high + 1;

    while(true){
        do{
            i++;
        }while(arr[i] < pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if(i >= j){
            return j;
        }

        swap(arr[i], arr[j]);
    }   

    return -1; // Should never reach here (error handling

}

void quicksort(vector<int> &arr, int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}


int main(){

    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quicksort(arr, 0, n-1);

    for(auto i : arr){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}