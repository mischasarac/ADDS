#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher(){
    head = nullptr;
}


int PrefixMatcher::selectRouter(string networkAddress){
    trieNode* temp = head;

    for(auto i : networkAddress){
        if(temp->children[i-'0'] == nullptr){
            return temp->number;
        } else {
            temp = temp->children[i-'0'];
        }
    }
}


void PrefixMatcher::insert(string address, int routerNumber){
    if(head == nullptr){
        head = new trieNode();
    }

    trieNode* temp = head;
    for(auto i : address){
        if(temp->children[i-'0'] == nullptr){
            std::cout << "adding: " << i << std::endl;
            temp->children[i-'0'] = new trieNode(i,false);
            temp = temp->children[i-'0'];
        } else {
            temp = temp->children[i-'0'];
        }
    }

    temp->number = routerNumber;
    temp->isLeaf = true;
}