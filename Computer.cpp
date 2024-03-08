#include "Computer.h"
#include "Rock.h"
#include "Move.h"

Computer::Computer(){
    // Always picks rock
    move = new Rock;
    Name = "Computer";
}

std::string Computer::getName(){return Name;}

Move* Computer::makeMove(){
    return move;
}