#include "Computer.h"

Computer::Computer(){
    Name = "Computer";
    move = 'R'; // Computer move will always be 'R'
}

char Computer::makeMove(){
    return move;
}