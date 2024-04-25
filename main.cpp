#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(){
    int arrLen = 5;
    int arr[] = {1,2,3,4,5};

    LinkedList list(arr, arrLen);

    list.printList();
    list.deletePosition(1);
    list.printList();
    list.insertPosition(1,3);
    list.printList();

    return 0;  


}