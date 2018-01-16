#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string int_to_str(int num){
    stringstream ss;

    ss << num;

    return ss.str();
}
int main() {
    int decimalNum, remainder, currentVal;
    string binaryNum="";

    cout << "Enter decimal number:" << endl;
    cin >> decimalNum;
    currentVal=decimalNum;

    while(currentVal>0) {
        remainder=currentVal%2;
        binaryNum=int_to_str(remainder)+binaryNum;
        currentVal/=2;
    }

    cout << "The binary representation of " << decimalNum << " is " << binaryNum;

    return 0;
}
