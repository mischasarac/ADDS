#include "Player.h"
#include "Move.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Associations.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(){
    Human player("Joe");
    Computer comp;

    Referee ref;
    ref.refGame(&player, &comp);
    return 0;
}