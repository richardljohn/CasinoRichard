//This is the class player. 
//He or she is your avatar for your game. 

#include <iostream>
#include <string>
using namespace std;

class Player {
    public:
        Player();
        Player(string name_);
        void setName(string name_);
        int getMoney();
        int setMoney(int mon);

    private:
        double money = 100.00;
        string name;
};