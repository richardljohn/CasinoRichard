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
        int setBet(int bet);

    private:
        double money = 100.00;
        string name;
};