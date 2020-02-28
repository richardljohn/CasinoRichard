//Name: This will let you play craps in the Casino Richard. 

#include "CrapsGame.hpp"
#include "Player.hpp"
#include "Player.cpp"

Craps::Craps(){

}

double Craps::setBet(){
    cout << "How much would you like to bet?: $";
    cin >> bet;
    while(bet > getMoney()){
        cout << "You do not have enough money to place your bet.";
        cout << "How much would you like to bet?: $"; 
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

double Craps::win(double amount){
    double money_;
    money_ = getMoney();
    money_ += amount;
    setMoney(money_);
}

double Craps::lose(double amount){
    double money_;
    money_ = getMoney();
    money_ -= amount;
    setMoney(money_);
}

void Craps::summary(){
    cout << "\n\n";
    chances = (wins / count);
    cout << "Your total earnings are: " << getMoney() << " $." << endl;
    cout << "You played " << count << " games." << endl;
    cout << "You won " << wins << " times." << endl;
    cout << "You lost " << losses << " times." << endl;
    cout << "Your win to loss ratio is " << chances * 100 << " percent." << endl;
}

void Craps::playCraps(){
    setBet();
    srand(time(0));
    while (repeat == 'Y') {
        roll = diceRoll();
        if ((roll == 7) || (roll == 11)) {
            cout << "You win! :)" << endl;
            count++;
            win(bet);
            wins++;
            cout << "Another game?! Y(es) or N(o)" << endl;                
            cin >> repeat;
            setBet();
        }
        else if ((roll == 2) || (roll == 3) || (roll == 12)) {
            cout << "You lose... :(" << endl;
            lose(bet);
            count++;
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
                count++;
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
                count++;
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