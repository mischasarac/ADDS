#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
protected:
    std::string Name;
    char move;
public:
    virtual std::string getName() = 0;
    virtual char makeMove() = 0;
};

#endif // PLAYER_H
