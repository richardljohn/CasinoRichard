//Name: This will let you play craps in the Casino Richard. 

#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include "Player.hpp"
using namespace std; 

class Craps: public Player{ 
    public: 
        Craps();
        int diceRoll();
        void playCraps();
        double setBet();
        double win(double amount);
        double lose(double amount);
        void summary();

    private: 
        int d1, d2, roll, point, wins, losses, newRoll;
        double chances, count, bet; 
        char repeat = 'Y'; 
};