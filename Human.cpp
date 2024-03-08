#include "Human.h"
#include <iostream>

Human::Human(){Name = "Human";}

Human::Human(std::string Name){this->Name = Name;}

std::string Human::getName(){return Name;}

Move* Human::makeMove(){
    Associations matcher;
    std::string moveString;
    std::cout << "Make move: ";
    std::cin >> moveString;

    // If string is not one of the available moves.
    if(matcher.matchString(moveString) == nullptr){
        std::cout << "Incorrect value entered: " << std::endl;
        // recursively calling function.
        return makeMove(); 
    }

    return matcher.matchString(moveString);

}
