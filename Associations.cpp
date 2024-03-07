#include "Associations.h"
#include "Player.h"
#include "Move.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

Associations::Associations(){

    linker = {
        {"Monkey", new Monkey},
        {"Ninja", new Ninja},
        {"Paper", new Paper},
        {"Pirate", new Pirate},
        {"Robot", new Robot},
        {"Rock", new Rock},
        {"Scissors", new Scissors},
        {"Zombie", new Zombie}        
    };
}

Move* Associations::matchString(string name){
    return linker[name];
}