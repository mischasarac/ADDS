#ifndef ASSOCIATIONS_H
#define ASSOCIATIONS_H

#include <unordered_map>
#include <string>

#include "Player.h"
#include "Move.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

using namespace std;

class Associations{
    unordered_map<string,Move*> linker;

public:
    Associations();
    Move* matchString(string name);
};

#endif // ASSOCIATIONS_H
