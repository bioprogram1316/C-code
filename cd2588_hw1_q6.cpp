#include <iostream>
using namespace std;

int main() {

    int quarters, dimes, nickels, pennies;
    int dollars, cents, totalCents;

    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> quarters;

    cout << "# of dimes: ";
    cin >> dimes;

    cout << "# of nickels: ";
    cin >> nickels;

    cout << "# of pennies: ";
    cin >> pennies;

    totalCents = (quarters*25)+(dimes*10)+(nickels*5)+pennies;
    dollars = totalCents/100;
    cents = totalCents%100;

    cout << "The total is " << dollars << " dollars and " << cents << " cents" << endl;

    return 0;
}
