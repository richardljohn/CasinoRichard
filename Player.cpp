//This is the class Player. 
//This is your avatar. 

#include "Player.hpp"

Player::Player(){

}

Player::Player(string name_){
    setName(name_);
    name = name_;
}

void Player::setName(string name_){
    name = name_;
}

int Player::getMoney(){
    return money;
}