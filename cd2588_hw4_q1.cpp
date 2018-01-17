#include <iostream>
using namespace std;

int fib(int n) {
    int fibNum, fibNum_1, fibNum_2;

    if(n==0)
        fibNum=1;
    else if(n==1)
        fibNum=1;
    else {
        fibNum_1=1;
        fibNum_2=1;
        for(int count=2; count<n; count++) {
            fibNum=fibNum_1+fibNum_2;
            if(count>2){
                fibNum_2=fibNum_1;
                fibNum_1=fibNum;
                fibNum=fibNum_1+fibNum_2;
            }
        }
    }
    return fibNum;
}

int main() {
    int num, fibNum;

    cout << "Please enter a positive integer: ";
    cin >> num;

    fibNum=fib(num);

    cout << fibNum << endl;

    return 0;
}
