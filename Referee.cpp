#include "Referee.h"
#include "iostream"

Player* Referee::refGame(Player* player1, Player* player2){
    Move* p1 = player1->makeMove();
    Move* p2 = player2->makeMove();

    // If value appears in the winsAgainst set.
    if((p1->getWins()).find(p2->getName()) != (p1->getWins()).end()){
        std::cout << "Player 1 wins" << std::endl;
        return player1;
    } else if ((p2->getWins()).find(p1->getName()) != (p2->getWins()).end()){ // Alternative option
        std::cout << "Player 2 wins" << std::endl;
        return player2;
    } else { // If neither wins against eachother
        std::cout << "It's a tie" << std::endl;
        return nullptr;
    }
}