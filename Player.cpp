//This is the class Player. 
//This is your avatar. 

#include "Player.hpp"

Player::Player(){

}

Player::Player(string name_){
    setName(name_);
    name = name_;
}

void Player::getName(){
    cout << name;
}
void Player::setName(string name_){
    name = name_;
}

double Player::setMoney(int mon){
    money = mon;
}

double Player::getMoney(){
    return money;
}