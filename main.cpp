//Richard John. 
//This is the Casino Richard Simulation. 

#include <iostream>
#include <string>
#include "Craps.hpp"
#include "Player.hpp"
using namespace std;

int main(){
    string game; 
    cout << "Welcome to the Casino Richard." << endl; 
    setName();
    setMoney();
    cout << "Here at the Casino Richard, we have many fun games to play." << endl;
    cout << "Here we have:\nCraps\nBlackjack\n";
    cout << "What would you like to do today: ";
    cin >> game; 
    if (game == "Craps"){
        playCraps();
    }
}
