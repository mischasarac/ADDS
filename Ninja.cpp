#include "Ninja.h"

Ninja::Ninja(){
    winsAgainst = {"Pirate", "Zombie"};
    name = "Ninja";
}
std::string Ninja::getName(){
    return name;
}
unordered_set<string> Ninja::getWins(){
    return winsAgainst;
}