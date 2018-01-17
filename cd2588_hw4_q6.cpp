#include <iostream>
using namespace std;

double eApprox(int n);
int factorial(int n);

int main() {
    cout.precision(30);

    for(int n=1; n<=15; n++){
        cout << "n= " << n << '\t' << eApprox(n) << endl;
    }

    return 0;
}

double eApprox(int n){
    double e=1;
    for(int count=1; count<=n+1; count++){
        e+=1.0/(factorial(count));
    }
    return e;
}

int factorial(int n) {
    int nFact=1;
    for(int i=1; i<=n; i++)
        nFact*=i;
    return nFact;
}

