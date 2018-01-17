#include <iostream>
using namespace std;

void analyzeDividors(int num, int& countDivs, int& sumDivs);
bool isPerfect(int num);

int main() {
    int num, countDivs=0, sumDivs=0;

    cout << "Please enter a positive integer num (>=2):" << endl;
    cin >> num;

    analyzeDividors(num, countDivs, sumDivs);
    for(int counter=2; counter<num; counter++){
        if(isPerfect(counter))
            cout << counter << " is a perfect number." << endl;
    }
    for(int counterA=2; counterA<num; counterA++){
        int countASum=0, countADivs=0;
        analyzeDividors(counterA, countADivs, countASum);
        for(int counterB=num; counterB>1; counterB--) {
            int countBSum=0, countBDivs=0;
            analyzeDividors(counterB, countBDivs, countBSum);

        if(countASum==counterB && countBSum==counterA && counterA!=counterB)
            cout << counterA << " and " << counterB << " are amicable numbers." << endl;
        }
    }

    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    for(int n=1; n<=num/2; n++){
        if(num%n==0) {
            outCountDivs++;
            outSumDivs+=n;
        }
    }
}

bool isPerfect(int num){
    int sumDivs=0, countDivs=0;
    analyzeDividors(num, countDivs, sumDivs);
    if(sumDivs==num)
        return true;
    else
        return false;
}
