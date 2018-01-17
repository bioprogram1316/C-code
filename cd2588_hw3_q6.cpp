#include <iostream>
#include <string>
using namespace std;
int main() {
    int number;

    cout << "Please enter a positive integer: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        int input_number = i;
        int total_odd_digits = 0;
        int total_even_digits = 0;

        while (input_number > 0){
            int digit = input_number%10;

            if (digit%2 == 0){
                total_even_digits = total_even_digits + 1;
            }
            else{
                total_odd_digits = total_odd_digits + 1;
            }
            input_number  = input_number / 10;
        }
        if (total_even_digits > total_odd_digits){
            cout << i <<endl;
        }
    }
    return 0;
}
