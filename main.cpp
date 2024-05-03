#include "LinkedList.h"
#include "Node.h"
#include <iostream>

int main(){
    LinkedList l;

    for(int i = 0; i < 8; i++){
        l.insertFront(i);
    }

    l.printList();
}