#include "LinkedList.h"

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
    // setting first position
    if(pos <= 1){
        head->setLink(new Node(newNum, head->getLink()));
    } else if(pos > length){
        Node* temp = head->getLink();
        while(temp->getLink() != nullptr){
            temp = temp->getLink();
        }

        temp->setLink(new Node(newNum, nullptr));
    }


    // Otherwise:
    for(int i = 0; i < pos-1; i++){
        insertion = insertion->getLink();
    }

    Node* temp = new Node(newNum, insertion->getLink());
    insertion->setLink(temp);

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
    Node* temp = head;

    for(int i = 0; i < pos; i++){
        temp = temp->getLink();
    }

    return temp->getData();
}


int LinkedList::search(int target){
    Node* temp = head->getLink();
    for(int i = 0; i < length-1; i++){
        if(temp->getData() == target){return i;}
    }

    return -1;
}


void LinkedList::printList(){

    Node* temp = head;
    if(temp == nullptr){return;}

    cout << '[';
    while(temp->getLink() != nullptr){
        cout << temp->getData() << " ";
        temp = temp->getLink();
    }

    cout << temp->getData() << ']' << endl;
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