#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human: public Player{
public:
    Human();
    Human(std::string Name);
    char makeMove();
    std::string getName();
};

#endif // HUMAN_H
