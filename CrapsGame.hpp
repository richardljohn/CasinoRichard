//Name: This will let you play craps in the Casino Richard. 

#include <iostream>
#include <cmath>
#include <ctime>
#include "Player.hpp"
using namespace std; 

class Craps: public Player{ 
    public: 
        Craps();
        int diceRoll();
        int playCraps();
        int getMoney();
        int setBet();

    private: 
        int d1, d2, roll, point, wins, losses, newRoll, bet;
        double chances, count; 
        char repeat = 'Y'; 
};