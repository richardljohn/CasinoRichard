//This is the class player. 
//He or she is your avatar for your game. 

#include <iostream>
#include <string>
using namespace std;

class Player {
    public:
        Player();
        Player(string name_);
        void getName();
        void setName(string name_);
        double getMoney();
        double setMoney(int mon);

    private:
        double money;
        string name;
};