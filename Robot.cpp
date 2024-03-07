#include "Robot.h"

Robot::Robot(){
    winsAgainst = {"Ninja", "Zombie"};
    name = "Robot";
}
std::string Robot::getName(){
    return name;
}
unordered_set<string> Robot::getWins(){
    return winsAgainst;
}
