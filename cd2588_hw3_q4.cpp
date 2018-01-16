#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double  sequence, mean1, mean2, total=1.0;
    int seqLength;

    cout << "Please enter the length of the sequence: ";
    cin >> seqLength;
    cout << "Please enter your sequence:" << endl;

    for(int count=1; count<=seqLength; count++) {
        cin >> sequence;
        total*=sequence;
    }
        if(seqLength%2==1) {
            mean1=pow(total, (1.0/seqLength));
            cout << "The geometric mean is: " << fixed << setprecision(4) << mean1 << endl;
        }
        else if(seqLength%2==0 && total>0) {
            mean1=pow(total, (1.0/seqLength));
            mean2=(-1*pow(total, (1.0/seqLength)));
            cout << "The geometric mean is: " << fixed << setprecision(4) << mean1 << " and " << mean2 << endl;
        }
        else if(seqLength%2==0 && total==0)
            cout << "The geometric mean is: 0" << endl;
        else
            cout << "There is no real geometric mean" << endl;

    cout << "\nPlease enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:" << endl;
    total=1.0;
    cin >> sequence;
    while(sequence!=-1) {
        total*=sequence;
        cin >> sequence;
    }
    if(seqLength%2==1) {
        mean1=pow(total, (1.0/seqLength));
        cout << "The geometric mean is: " << fixed << setprecision(4) << mean1 << endl;
    }
    else if(seqLength%2==0 && total>0) {
        mean1=pow(total, (1.0/seqLength));
        mean2=(-1*pow(total, (1.0/seqLength)));
        cout << "The geometric mean is: " << fixed << setprecision(4) << mean1 << " and " << mean2 << endl;
    }
    else if(seqLength%2==0 && total==0)
        cout << "The geometric mean is: 0" << endl;
    else
        cout << "There is no real geometric mean" << endl;

    return 0;
}
