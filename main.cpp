#include "Autocomplete.h"

int main(){
    Autocomplete a;

    a.insert("hello");
    a.insert("hell");
    a.insert("he");
    a.insert("homework");
    a.insert("homeworks");
    a.insert("help");
    a.insert("helps");
    a.insert("helping");
    a.insert("helped");
    a.insert("helpful");
    a.insert("helpfulness");
    a.insert("horny");

    vector<std::string> balls = a.getSuggestion("help");

    for(auto i : balls){
        std::cout << i << std::endl;
    }

    return 0;
}