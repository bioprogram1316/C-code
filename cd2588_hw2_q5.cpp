#include <iostream>
using namespace std;
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
int main() {
    double userInput;
    int selection, output;

    cout << "Please enter a Real number:" << endl;
    cin >> userInput;
    cout << "Choose your rounding method:\n1. Floor round\n2. Ceiling round\n3. Round to the nearest whole number\n";
    cin >> selection;

    switch(selection) {
        case FLOOR_ROUND:
            if(userInput>0) {
                output=int(userInput);
                break;
            }
            else {
                output=int(userInput)-1;
                break;
            }

        case CEILING_ROUND:
            if(userInput>0) {
                output=1+int(userInput);
                break;
            }
            else {
                output=int(userInput);
                break;
            }
        case ROUND:
            if(userInput>0) {
                if((userInput-int(userInput))>=5)
                    output=1+int(userInput);
                else
                    output=int(userInput);
                break;
            }
            else {
                if((userInput-int(userInput))<=-0.5)
                    output=int(userInput)-1;
                else
                    output=int(userInput);
                break;
            }

    }

    cout << output << endl;

    return 0;
}
