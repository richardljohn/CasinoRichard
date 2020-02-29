//Name: This will let you play Craps in the Casino Richard. 
//File: These are all the methods for Craps.

#include "Player.hpp"
#include "Craps.hpp"
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

double bet, chances;
int wins, losses, d1, d2, roll, point, newRoll;
int number = 0; 
char repeat;

//Prototype Functions...

int diceRoll();
double setBet();
double win(double amount);
double lose(double amount);
void summary();
void playCraps();

//Rolls dice
int diceRoll(){
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int diceTotal = die1 + die2;
    cout << "You rolled a  " << die1 << " and a " << die2 << ".\n" << "Your roll is a "<< diceTotal << "." << endl;
    return diceTotal;
}

//Sets how much money you want to bet. 
double setBet(){
    cout << "How much would you like to bet?\n$ "; 
    cin >> bet; 
    while(bet > money){
        cout << "You do not have enough money to place your bet." << endl;
        cout << "How much would you like to bet?\n$ ";
        cin >> bet;
    }
}

//Will show you how much money you have left after a win. 
double win(double amount){
    money = money + amount;
    cout << "You now have " << money << "dollars left." << endl;
}

//Will show you how much money you have left after a loss. 
double lose(double amount){
    money = money - amount;
    cout << "You now have " << money << "dollars left." << endl;
}

//Simulates Craps games. 
void playCraps(){
    setBet();
    srand(time(0));
    repeat = 'Y';
    while (repeat == 'Y') {
        roll = diceRoll();
        if ((roll == 7) || (roll == 11)) {
            cout << "You win! :)" << endl;
            number++;
            win(bet);
            wins++;
            cout << "Another game?! Y(es) or N(o)" << endl;                
            cin >> repeat;
            setBet();
        }
        else if ((roll == 2) || (roll == 3) || (roll == 12)) {
            cout << "You lose... :(" << endl;
            lose(bet);
            number++;
            losses++;
            cout << "Another game??.... Y(es) or N(o)" << endl;
            cin >> repeat;
            if(repeat == 'Y'){
                setBet();
            }
        }
        else if ((roll == 4) || (roll == 5) || (roll == 6) || (roll == 8) || (roll == 9) || (roll == 10)) {
            point = roll;
            cout << point << endl;
            d1 = rand() % 6 + 1;
            d2 = rand() % 6 + 1;
            newRoll = d1 + d2;
            cout << newRoll << endl;
            if (newRoll == point) {
                cout << "You win! :)" << endl;
                win(bet);
                number++;
                wins++;
                cout << "Another game?! Y(es) or N(o)" << endl;
                cin >> repeat;
                if(repeat == 'Y'){
                    setBet();
                }
            }
            else if (newRoll == 7) {
                cout << "You lose... :(" << endl;
                lose(bet);
                number++;
                losses++;
                cout << "Another game??... Y(es) or N(o)" << endl;
                cin >> repeat;
                if(repeat == 'Y'){
                    setBet();
                }
            }
            else {
                d1 = rand() % 6 + 1;
                d2 = rand() % 6 + 1;
                roll = d1 + d2;
            }
        }
    }
    summary();
}

//Complete summary. 
void summary(){
    cout << "\n";
    chances = (wins / number);
    cout << "Your total earnings are: " << money << " $." << endl;
    cout << "You played " << number << " games." << endl;
    cout << "You won " << wins << " times." << endl;
    cout << "You lost " << losses << " times." << endl;
    cout << "Your win to loss ratio is " << chances * 100 << " percent." << endl;
}