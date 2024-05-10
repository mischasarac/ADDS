#include "trie.h"
#include "Autocomplete.h"

int main(){
    Autocomplete a;
    a.insert("he");
    a.insert("hell");
    a.insert("hello");
    a.insert("help");

    vector<string> words = a.getSuggestion("hello");

    for(auto i : words){
        std::cout << i << std::endl;
    }
    return 0;
}