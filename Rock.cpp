#include "Rock.h"

Rock::Rock(){
    winsAgainst = {"Scissors"};
    name = "Rock";
}
std::string Rock::getName(){
    return name;
}
unordered_set<string> Rock::getWins(){
    return winsAgainst;
}
