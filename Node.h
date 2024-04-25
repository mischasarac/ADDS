#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* link;
public:
    Node();
    Node(int data, Node* link);
    int getData();
    void setData(int data);

    Node* getLink();
    void setLink(Node* link);
};

#endif // NODE_H
