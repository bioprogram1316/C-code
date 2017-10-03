#include <iostream>
using namespace std;

int main() {

    int dollars, cents;
    int totalCents, quarters, dimes, nickels, pennies;

    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> dollars >> cents;

    totalCents = cents + (dollars*100);
    quarters = totalCents/25;
    totalCents = totalCents-(quarters*25);
    dimes = totalCents/10;
    totalCents = totalCents-(dimes*10);
    nickels = totalCents/5;
    totalCents = totalCents-(nickels*5);
    pennies = totalCents;

    cout << dollars << " dollars and " << cents << " cents are:" << endl;
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies" << endl;

    return 0;
}
