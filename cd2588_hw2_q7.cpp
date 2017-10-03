#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string day;
    int hour, minutes, callLength;
    char temp;
    double cost;

    cout << "Please enter the time the call started (in 24-hour format): ";
    cin >> hour >> temp >> minutes;
    cout << "Please enter the day of the week the call was placed, as Mo, Tu, We, Th, Fr, Sa, Su: ";
    cin >> day;
    cout << "Please enter the duration of the call (in minutes): ";
    cin >> callLength;

    if(day=="Sa" || day=="Su")
        cost=callLength*0.15;
    else if(hour>=8 && (hour<18 || (hour==18 && minutes==0)))
        cost=callLength*0.40;
    else
        cost=callLength*0.25;

    cout << "This call cost: $" << fixed << setprecision(2) << cost << endl;

    return 0;
}
