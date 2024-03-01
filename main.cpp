#include "Referee.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include <string>
#include <iostream>

int main(){
    Computer comp;
    Human hum;
    Referee ref;

    Player* finish = ref.refGame(&hum,&comp);
    // return 0;

    // delete comp;
    // delete hum;
}