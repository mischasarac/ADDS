#include "Referee.h"
#include <iostream>

Referee::Referee(){
    // Map each move to its losing correspondent
    interactions['R'] = 'P';
    interactions['P'] = 'S';
    interactions['S'] = 'R';
}

Player* Referee::refGame(Player* player1, Player* player2){
    char p1 = player1->makeMove();
    char p2 = player2->makeMove();

    if(p1 == p2){
        cout << "It's a Tie" << endl;
        return nullptr;
    }
    if(p2 == interactions[p1]){
        cout << player2->getName() << " Wins" << endl;
        return player2;
    } else {
        cout << player1->getName() << " Wins" << endl;
        return player2;
    }
}