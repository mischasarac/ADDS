#include "Paper.h"

Paper::Paper(){
    winsAgainst = {"Rock"};
    name = "Paper";
}
std::string Paper::getName(){
    return name;
}
unordered_set<string> Paper::getWins(){
    return winsAgainst;
}
