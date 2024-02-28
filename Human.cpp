#include "Human.h"
#include <iostream>

Human::Human() : Player::Player() {}
Human::Human(std::string Name) : Player::Player(Name){} // Calling on same constructor as player
char Human::makeMove(){

    // Taking in possible name
    std::cout << "Enter Move: ";
    std::cin >> move;

    // Making sure move is possible
    if(move != 'R' || move != 'P' || move != 'S'){
        std::cout << "Please enter a valid move.";

        // if not, recursively calling function again to have a valid move
        return makeMove();
    }

    // Returning player's move
    return move;
}