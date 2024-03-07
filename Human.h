#ifndef HUMAN_H
#define HUMAN_H

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
#include "Associations.h"

class Human: public Player{
public:
    Human();
    Human(std::string Name);
    std::string getName();
    Move* makeMove();
};

#endif // HUMAN_H
