#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int guess, lower=1, upper=100;
    int chosenNum, guessesMade=0, guessesLeft=5;

    srand(time(0));
    chosenNum=(rand()%100)+1;
    //cout << chosenNum;

    cout << "I thought of a number between 1 and 100! Try to guess it.\nRange:[1, 100], Number of guesses left: 5" << endl;

    for (int tries=0; tries<5; tries++) {
        cin >> guess;
        if(guess==chosenNum) {
            cout << "Your guess: " << guess << endl;
            guessesMade++;
            cout << "Congrats! You guessed my number in " << guessesMade << " guesses." << endl;
            break;
        }
        else if(guess>chosenNum) {
            upper=guess;
            guessesLeft--;
            guessesMade++;
            cout << "Range: [" << upper << ", " << lower << "], Number of guesses left: " << guessesLeft <<endl;
            cout << "Your guess: " << guess << endl;
            cout << "Wrong! My number is smaller." << endl;
        }
        else {
            lower=guess;
            guessesLeft--;
            guessesMade++;
            cout << "Range: [" << upper << ", " << lower << "], Number of guesses left: " << guessesLeft <<endl;
            cout << "Your guess: " << guess << endl;
            cout << "Wrong! My number is bigger." << endl;
        }
    }
    if(guessesLeft==0) {
        cout << "Out of guesses! My number is " << chosenNum << endl;
    }

    return 0;
}
