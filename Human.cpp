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

    if(matcher.matchString(moveString) == nullptr){
        std::cout << "Incorrect value entered: " << std::endl;

        return makeMove(); 
    }

    return matcher.matchString(moveString);

}
