#include "Node.h"

Node::Node() : data(0), link(nullptr){}

Node::Node(int data, Node* link){
    this->data = data;
    this->link = link;
}

int Node::getData(){ return data; }
void Node::setData(int data){ this->data = data; }

Node* Node::getLink(){ return link; }
void Node::setLink(Node* link){ this->link = link; }
