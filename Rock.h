#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock: public Move{
public:
    Rock();
    std::string getName();
    unordered_set<string> getWins();
};

#endif // ROCK_H
