#include "Monkey.h"

Monkey::Monkey(){
    winsAgainst = {"Ninja", "Robot"};
    name = "Monkey";
}

std::string Monkey::getName(){
    return name;
}
unordered_set<string> Monkey::getWins(){return winsAgainst;}

