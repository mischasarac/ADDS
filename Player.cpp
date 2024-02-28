#include "Player.h"

Player::Player(){Name = '0';}
Player::Player(std::string Name){this->Name = Name;}

std::string Player::getName(){return Name;};