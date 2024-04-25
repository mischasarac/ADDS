#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    Node* head;
    int length;
public:
    LinkedList();
    LinkedList(int* array, int len);

    // list attributes

    void insertPosition(int pos, int newNum);
    bool deletePosition(int pos);
    int get(int pos);
    int search(int target);
    void printList();


    // deconstructor clearing memory
    ~LinkedList();
};

#endif // LINKEDLIST_H
