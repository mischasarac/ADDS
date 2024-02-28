#include "Computer.h"

Computer::Computer(){
    Name = "Computer";
    move = 'R';
}

char Computer::makeMove(){
    return move;
}