#include "Computer.h"
#include "Player.h"

Computer::Computer(){
    Name = "Computer";
    move = 'R'; // Computer move will always be 'R'
}

char Computer::makeMove(){
    return move;
}

std::string Computer::getName(){return Name;}