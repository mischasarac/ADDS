#include "Zombie.h"

Zombie::Zombie(){
    winsAgainst = {"Pirate", "Monkey"};
    name = "Zombie";
}
std::string Zombie::getName(){
    return name;
}
unordered_set<string> Zombie::getWins(){
    return winsAgainst;
}