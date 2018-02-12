#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName, middleName, lastName;

    cout << "Please enter your first name, middle name or middle initial, and last name (separated by a space): " << endl;
    cin >> firstName >> middleName >> lastName;

    middleName=middleName.substr(0, 1) + ".";
    cout << lastName << ", " << firstName << " " << middleName << endl;

    return 0;
}
