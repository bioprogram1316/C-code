#include <iostream>
using namespace std;
int main() {
    int n, currentInt=2, count=1;

    cout << "Please enter a positive integer: ";
    cin >> n;

    while(count<=n){
        cout << currentInt << endl;
        count++;
        currentInt+=2;
    }

    for(count=1, currentInt=2; count<=n; count++, currentInt+=2)
        cout << currentInt << endl;

    return 0;
}
