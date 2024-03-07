#include "Scissors.h"

Scissors::Scissors(){
    winsAgainst = {"Paper"};
    name = "Scissors";
}
std::string Scissors::getName(){
    return name;
}
unordered_set<string> Scissors::getWins(){
    return winsAgainst;
}
