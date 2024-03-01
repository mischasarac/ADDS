#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer: public Player{
public:
    Computer();
    char makeMove();
    std::string getName();
};

#endif // COMPUTER_H
