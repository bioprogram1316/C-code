#include <iostream>
using namespace std;

void printDivisors(int num);
int main() {
    int num;

    cout << "Please enter a positive integer >=2: ";
    cin >> num;

    printDivisors(num);

    return 0;
}

void printDivisors(int num){
    for(int divisorCheck=1; divisorCheck<=num; divisorCheck++){
        if(num%divisorCheck==0)
            cout << divisorCheck << " ";
    }
}
