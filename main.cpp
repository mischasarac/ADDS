#include "LinkedList.h"
#include "Node.h"
#include <iostream>

int main(){
    LinkedList l;

    for(int i = 8; i > 0; i--){
        l.insertFront(i);
    }

    l.printList();
    std::cout << std::endl;

    l.swap(0,1);
    l.printList();
    std::cout << std::endl;

    // testing outside bounds

    l.find_and_delete(0);
    l.find_and_delete(2);
    l.find_and_delete(8);

    l.printList();
    std::cout << std::endl;
}