//Richard John
//Casino.

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int d1, d2, roll, point, wins, losses, newRoll;
    double chances, count;
    char repeat = 'Y';
    
    while (repeat == 'Y') {
        d1 = rand() % 6 + 1;
        cout << d1 << endl;
        d2 = rand() % 6 + 1;
        cout << d2 << endl;
        roll = d1 + d2;
        cout << roll << endl;
        if ((roll == 7) || (roll == 11)) {
            cout << "You win! :)" << endl;
            count++;
            wins++;
            cout << "Another game?! Y(es) or N(o)" << endl;                
            cin >> repeat;
        }
        else if ((roll == 2) || (roll == 3) || (roll == 12)) {
            cout << "You lose... :(" << endl;
            count++;
            losses++;
            cout << "Another game??.... Y(es) or N(o)" << endl;
            cin >> repeat;
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
                count++;
                wins++;
                cout << "Another game?! Y(es) or N(o)" << endl;
                cin >> repeat;
            }
            else if (newRoll == 7) {
                cout << "You lose... :(" << endl;
                count++;
                losses++;
                cout << "Another game??... Y(es) or N(o)" << endl;
                cin >> repeat;
            }
            else {
                d1 = rand() % 6 + 1;
                d2 = rand() % 6 + 1;
                roll = d1 + d2;
            }
        }
    }
    cout << "\n\n";
    chances = (wins / count);
    cout << "You played " << count << " games." << endl;
    cout << "You won " << wins << " times." << endl;
    cout << "You lost " << losses << " times." << endl;
    cout << "Your win to lose ratio is " << chances * 100 << " percent." << endl;
    cout << "Thank you for playing at the CSI Casino." << endl;
    return 0;
}