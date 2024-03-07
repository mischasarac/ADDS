#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <unordered_map>
#include "Move.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"


class Player{
protected:
    std::string Name;
    Move* move;
public:
    virtual std::string getName() = 0;
    virtual Move* makeMove() = 0;
};

#endif // PLAYER_H
