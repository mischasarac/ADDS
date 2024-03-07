#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate: public Move{
public:
    Pirate();
    std::string getName();
    unordered_set<string> getWins();
};

#endif // PIRATE_H
