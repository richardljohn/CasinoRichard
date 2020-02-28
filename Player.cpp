//This is the class Player. 
//This is your avatar. 

#include "Player.hpp"

Player::Player(){

}

void Player::getName(){
    cout << name;
}
void Player::setName(string name_){
    name = name_;
}

double Player::setMoney(double mon){
    money = mon;
}

double Player::getMoney() const{
    return money;
}