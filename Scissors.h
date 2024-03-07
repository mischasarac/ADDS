#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors: public Move{
public:
    Scissors();
    std::string getName();
    unordered_set<string> getWins();
};

#endif // SCISSORS_H
