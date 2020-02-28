//This is the class player. 
//He or she is your avatar for your game. 

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player {
    public:
        Player();
        void getName();
        void setName(string name_);
        double getMoney() const;
        double setMoney(double mon);

    private:
        double money;
        string name;
};