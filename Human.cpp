#include "Human.h"
#include <iostream>

Human::Human() : Player::Player() {}
Human::Human(std::string Name) : Player::Player(Name){}
char Human::makeMove(){
    std::cout << "Enter Move: ";
    std::cin >> move;
    if(move != 'R' || move != 'P' || move != 'S'){
        std::cout << "Please enter a valid move.";
        return makeMove();
    }
    return move;
}