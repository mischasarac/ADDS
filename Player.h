#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
protected:
    std::string Name;
    char move;
public:
    Player();
    Player(std::string Name);
    std::string getName();
    virtual char makeMove() = 0;
};

#endif // PLAYER_H
