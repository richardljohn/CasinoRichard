//The Avatar class, the user can use for playing in the casino. 

#pragma once
#include "Player.hpp"
#include "Player.cpp"

class Avatar: public Player {
    public:
        Avatar();
        Avatar(string name_);
        void getName();
        void setName(string name_);
        double getMoney();
        double setMoney(int mon);

    private:
        double money;
        string name;
};