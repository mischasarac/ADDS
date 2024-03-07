#include "Pirate.h"


Pirate::Pirate(){
    winsAgainst = {"Robot", "Monkey"};
    name = "Pirate";
}
std::string Pirate::getName(){
    return name;
}
unordered_set<string> Pirate::getWins(){
    return winsAgainst;
}
