#include "Autocomplete.h"
#include <queue>


Autocomplete::Autocomplete(){
    head = nullptr;
}

void Autocomplete::insert(std::string word){
    if(head == nullptr){
        head = new trieNode();
    }

    trieNode* temp = head;
    for(auto i : word){
        if(temp->children[i-'a'] == nullptr){
            temp->children[i-'a'] = new trieNode(i,false);
            temp = temp->children[i-'a'];
        } else {
            temp = temp->children[i-'a'];
        }
    }

    temp->isLeaf = true;

    
}
vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    vector<std::string> ans;

    trieNode* temp = head;
    for(auto i : partialWord){
        if(temp->children[i-'a'] == nullptr){
            return {};
        } else {
            temp = temp->children[i-'a'];
        }
    }

    // searching for all children
    std::string currWord = partialWord;
    queue<pair<trieNode*, std::string>> q;
    q.push({temp, currWord});

    while(!q.empty()){
        pair<trieNode*, std::string> curr = q.front();
        q.pop();

        if(curr.first->isLeaf == true){ // if the word is a leaf
            ans.push_back(curr.second); // appending word at this point
        }

        for(int i=0; i<26; i++){
            if(curr.first->children[i] != nullptr){
                q.push({curr.first->children[i], curr.second + (char)(i+'a')}); //(char)(i+'a') should append the letter onto this string
            }
        }
    }


    return ans;
}