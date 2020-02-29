//This is the Player. 
//This is your avatar. 

#include "Player.hpp"
#include <iostream>
using namespace std;

void setName(){
    cout << "What is your name?\n";
    cin >> name;
}

double setMoney(){
    cout << "How much money do you have?\n$";
    cin >> money;
}
