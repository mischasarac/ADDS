#ifndef TRIE_H
#define TRIE_H

#include <iostream>
#include <vector>
using namespace std;


class trieNode{
    char data;
    vector<trieNode*> children;
    bool isLeaf;
    int number;
    friend class Autocomplete;
    friend class PrefixMatcher;
public:
    trieNode(){
        data = '*';
        isLeaf = 0;
        children = vector<trieNode*>(26,nullptr);
    }

    trieNode(char data, bool isLeaf){
        this->data = data;
        this->isLeaf = isLeaf;
        children = vector<trieNode*>(26,nullptr);
    }
};

#endif // TRIE_H
