#include <iostream>
using namespace std;
int main() {
    int userInput, tally;

    cout << "Enter decimal number:" << endl;
    cin >> userInput;
    tally=userInput;

    cout << userInput << " is ";

    while (tally>0) {
        if(tally>=1000) {
            cout << 'M';
            tally-=1000;
        }
        else if(tally<1000 && tally>=500) {
            cout << 'D';
            tally-=500;
        }
        else if(tally<500 && tally>=100){
            cout << 'C';
            tally-=100;
        }
        else if(tally<100 && tally>=50) {
            cout << 'L';
            tally-=50;
        }
        else if(tally<50 && tally>=10) {
            cout << 'X';
            tally-=10;
        }
        else if(tally<10 && tally>=5) {
            cout << 'V';
            tally-=5;
        }
        else if(tally<5 && tally>=1) {
            cout << 'I';
            tally-=1;
        }

    }

    cout << endl;

    return 0;
}
