#ifndef COMPUTER_H
#define COMPUTER_H

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

class Computer: public Player{
public:
    Computer();
    std::string getName();
    Move* makeMove();
    ~Computer();
};

#endif // COMPUTER_H
