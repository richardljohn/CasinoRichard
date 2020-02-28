//Richard John. 
//This is the Casino Richard Simulation. 

#include "CrapsGame.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, game;
    char anothaOne;
    cout << "Hello valued guest." << endl; 
    cout << "Welcome to the Casino Richard, where so many things are possible.";
    cout << "What is your name: ";
    cin >> name;
    Player.setName(name);
    cout << "At the Casino Richard we have a wide selection of games to play." << endl;
    cout << "Craps" << endl;
    cout << "Blackjack" << endl; 
    cout << "What would you like to play?: " << endl;
    cin >> game; 

    if (game == "Craps") {
        playCraps();
        cout << "Would you like to play another game? (Y)es or (N)o?: "; 
        cin >> anothaOne;
        cout << "What would you like to play?: " << endl;
        cin >> game; 
    }
    else if (game == "Blackjack"){
        
        cout << "Would you like to play another game? (Y)es or (N)o?: "; 
        cin >> anothaOne;
        cout << "What would you like to play?: " << endl;
        cin >> game; 
    }
}