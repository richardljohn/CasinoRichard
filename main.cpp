//Richard John. 
//This is the Casino Richard Simulation. 

#include "CrapsGame.hpp"
#include "CrapsGame.cpp"
#include "Player.cpp"
#include "Player.hpp"

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, game;
    double cash;
    char anothaOne;
    cout << "Hello valued guest." << endl; 
    cout << "Welcome to the Casino Richard, where so many things are possible.";
    cout << "What is your name: ";
    cin >> name;
    cout << "And how much money do u have: ";
    cin >> cash;
    Player Avatar;
    Avatar.setName(name);
    Avatar.setMoney(cash);
    cout << "At the Casino Richard we have a wide selection of games to play." << endl;
    cout << "Craps" << endl;
    cout << "Blackjack" << endl; 
    cout << "What would you like to play?: " << endl;
    cin >> game; 

    if (game == "Craps") {
        Craps Craps_;
        Craps_.playCraps();
        cout << "Would you like to play another game? (Y)es or (N)o?: "; 
        cin >> anothaOne;
        while(anothaOne == 'Y'){
            cout << "What would you like to play?: " << endl;
            cin >> game; 
        }
    }
    else if (game == "Blackjack"){
        
        cout << "Would you like to play another game? (Y)es or (N)o?: "; 
        cin >> anothaOne;
        while(anothaOne == 'Y'){
            cout << "What would you like to play?: " << endl;
            cin >> game;
        }
    }
}