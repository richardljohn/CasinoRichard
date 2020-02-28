//Name: This will let you play craps in the Casino Richard. 

#include "CrapsGame.hpp"
#include "Player.hpp"
#include "Player.cpp"

Craps::Craps(){

}

int Craps::setBet(){
    cout << "How much would you like to bet?: ";
    cin >> bet;
    while(bet > getMoney()){
        cout << "You do not have enough money to place your bet." << endl;
        cout << "How much would you like to bet?: "; 
        cin >> bet;  
    }
}

int Craps::diceRoll(){
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int diceTotal = die1 + die2;
    cout << "You rolled a  " << die1 << " and a " << die2 << ".\n" << "Your roll is a "<< diceTotal << "." << endl;
    return diceTotal;
}

int Craps::playCraps(){
    

}