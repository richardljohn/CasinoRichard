//Name: This will let you play craps in the Casino Richard. 

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std; 

class Craps{ 
    public: 
        int diceRoll();
        int playCraps();

    private: 
        int d1, d2, roll, point, wins, losses, newRoll;
        double chances, count; 
        char repeat; 
};