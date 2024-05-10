#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <iostream>
#include <vector>
#include <string>

#include "trie.h"

// using namespace std;

class Autocomplete{
    trieNode* head;
public:
    Autocomplete();

    void insert(std::string word);
    vector<std::string> getSuggestion(std::string partialWord);
};


#endif // AUTOCOMPLETE_H
