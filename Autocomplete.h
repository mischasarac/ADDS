#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <iostream>
#include <vector>
#include <string>

#include "trie.h"

using namespace std;

class Autocomplete{
    trieNode* head;
public:
    Autocomplete();

    void insert(string word);
    vector<string> getSuggestion(string partialWord);
};


#endif // AUTOCOMPLETE_H
