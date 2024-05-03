#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
    if(pos2>pos1){
        return swap(pos2,pos1);
    }
    if(pos1 < 0){
        return false;
    }

    Node* temp1 = head;
    Node* temp2 = head;

    for(int i = 0; i < pos2; i++){

        if(temp2 == nullptr){ return false; } // if exceeds bounds in length

        if(i == pos1){ // when the loop passes through i
            temp1 = temp2;
        }

        temp2 = temp2->link;
    }

    // swapping values
    int tempVal = temp2->data;
    temp2->data = temp1->data;
    temp1->data = tempVal;

    // returning success in swap
    return true;
    
}

bool LinkedList::find_and_delete(int target) {
    Node* temp = head->link;
    Node* prev = head;

    if(head->data == target){ // if the target is at the head value
        deleteFront();
        return true;
    }

    while(temp != nullptr){ // will terminate at return so don't need to check if equals target.

        if(temp->data == target){
            prev->link = temp->link;
            delete temp;
        }

        prev = temp;
        temp = temp->link;


    }
}