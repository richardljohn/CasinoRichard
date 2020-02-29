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