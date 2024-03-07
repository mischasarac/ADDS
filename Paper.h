#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper: public Move{
public:
    Paper();
    std::string getName();
    unordered_set<string> getWins();
};

#endif // PAPER_H
