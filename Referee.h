#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
// #include <vector>
#include <unordered_map>
using namespace std;

class Referee{
    // Map to track which move loses against which.
    unordered_map<char,char> interactions;
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);
};

#endif // REFEREE_H
