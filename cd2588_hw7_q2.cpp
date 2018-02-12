#include <iostream>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int main(){
    int numArray[4]={2, -1, 3, 10};
    int arrSize=4, sum;

    sum = sumOfSquares(numArray, arrSize);
    cout << sum << endl;
    if(isSorted(numArray, arrSize))
        cout << "This array is sorted." << endl;
    else
        cout << "This array is not sorted." << endl;
    return 0;
}
int sumOfSquares(int arr[], int arrSize){
    int sum=0;

    if(arrSize==1){
        return (arr[0]*arr[0]);
    }
    else {
        sum=sumOfSquares(arr, arrSize-1);
        sum+=arr[arrSize-1]*arr[arrSize-1];
        return sum;
    }
}
bool isSorted(int arr[], int arrSize){
    bool sorted=false;
    int i=0;

    if(arrSize==1 || arrSize==0){
        sorted=true;
        return sorted;
    }
    else {
        if(arr[arrSize-1]<arr[arrSize-2]){
            sorted=false;
            return sorted;
        }
        else
            isSorted(arr, arrSize-1);
    }
}
