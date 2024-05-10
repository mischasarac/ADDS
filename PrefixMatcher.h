#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <iostream>
#include "trie.h"
#include <vector>
#include <string>

using namespace std;



class PrefixMatcher{
    trieNode* head;
public:
    PrefixMatcher();
    int selectRouter(string networkAddress);
    void insert(string address, int routerNumber);

};

#endif // PREFIXMATCHER_H
