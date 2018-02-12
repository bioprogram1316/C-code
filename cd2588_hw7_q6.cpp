#include <iostream>
using namespace std;

int binarySearch(int arr[], int arrSize, int val);
int main(){
    int arr[10]={1, 3, 6, 7, 13, 15, 20, 25, 29, 30};
    int arrSize=10;
    int n=13, valInd;

    valInd=binarySearch(arr, arrSize, n);
    cout << valInd << endl;

    return 0;
}
int binarySearch(int arr[], int arrSize, int val){

    for(int i=0; i<arrSize; i++){
        if(arr[i]==val)
            return i;
    }
    return -1;
 }
