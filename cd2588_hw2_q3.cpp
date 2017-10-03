#include <iostream>
using namespace std;
int main() {
    string name;
    int gradYear, currentYear;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your graduation year: ";
    cin >> gradYear;
    cout << "Please enter current year: ";
    cin >> currentYear;

    if(gradYear-currentYear<=0)
        cout << name << ", you are Graduated" << endl;
    else if(gradYear-currentYear==1)
        cout << name << ", you are a Senior" << endl;
    else if(gradYear-currentYear==2)
        cout << name << ", you are a Junior" << endl;
    else if(gradYear-currentYear==3)
        cout << name << ", you are a Sophmore" << endl;
    else if(gradYear-currentYear==4)
        cout << name << ", you are a Freshman" << endl;
    else
        cout << name << ", you are a not in college yet" << endl;


    return 0;
}
