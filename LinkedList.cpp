#include "LinkedList.h"
#include <limits>

LinkedList::LinkedList(){
    this->head = nullptr;
    this->length = 0;
}
LinkedList::LinkedList(int* array, int len){
    length = len;
    head = nullptr;

    for(int i = len-1; i >= 0; i--){
        head = new Node(array[i], head);
    }

}

// list attributes

void LinkedList::insertPosition(int pos, int newNum){
    Node* insertion = head;

    while(insertion != nullptr){
        insertion = insertion->getLink();
    }

    insertion = head;
    // setting first position
    if(pos <= 1){
        head = new Node(newNum, head);
        return;
    } 

    // Otherwise:
    for(int i = 0; i < pos-2; i++){
        if(insertion->getLink() == nullptr){
            insertion->setLink(new Node(newNum, nullptr));
            return;
        }

        insertion = insertion->getLink();
    }

    insertion->setLink(new Node(newNum, insertion->getLink()));

}


bool LinkedList::deletePosition(int pos){
    if(pos < 1 || pos > length){ return false; }

    Node* temp = head;
    Node* deleted;

    // exception case
    if(pos == 1){
        head = head->getLink();
        delete temp;
        length--;
        return true;
    }

    for(int i = 0; i < pos-2; i++){
        temp = temp->getLink();
    }

    // set the link to one ahead
    deleted = temp->getLink();
    temp->setLink(deleted->getLink());

    length--;
    delete deleted;
    return true;
}


int LinkedList::get(int pos){

    if(pos < 1){return std::numeric_limits<int>::max();}

    Node* temp = head;

    for(int i = 0; i < pos-1; i++){
        if(temp->getLink() == nullptr){return std::numeric_limits<int>::max();}
        temp = temp->getLink();
    }

    return temp->getData();
}


int LinkedList::search(int target){
    Node* temp = head;
    int count = 1;
    while(temp != nullptr){
        if(temp->getData() == target){return count;}
        temp = temp->getLink();
        count++;
    }

    return -1;
}


void LinkedList::printList(){

    Node* temp = head;
    if(temp == nullptr){return;}

    std::cout << '[';
    while(temp->getLink() != nullptr){
        std::cout << temp->getData() << " ";
        temp = temp->getLink();
    }

    std::cout << temp->getData() << ']' << std::endl;
    return;
}


// deconstructor clearing memory
LinkedList::~LinkedList(){
    Node* temp;
    while(head->getLink() != nullptr){
        temp = head->getLink();
        head->setLink(temp->getLink());
        delete temp;
    }

    delete head;
}