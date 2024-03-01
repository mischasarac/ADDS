#include "Human.h"
#include "Player.h"
#include <iostream>

Human::Human() {this->Name = "Human";}

Human::Human(std::string Name) {this->Name = Name;} // Calling on same constructor as player


char Human::makeMove(){

    // Taking in possible name
    std::cout << "Enter Move: ";
    std::cin >> move;

    // Making sure move is possible
    if(!(move == 'R' || move == 'P' || move == 'S')){
        std::cout << "Please enter a valid move.";

        // if not, recursively calling function again to have a valid move
        return makeMove();
    }

    // Returning player's move
    return move;
}

std::string Human::getName(){return Name;};