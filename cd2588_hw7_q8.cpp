#include <iostream>
using namespace std;

void insertionSort(int a[], int aSize);
void swapInts(int &a, int &b);
int main(){
    int arr[10]={8, 6, 10, 2, 16, 4, 18, 14, 12, 10};
    int arrSize=10;

    insertionSort(arr, arrSize);

    for(int i=0; i<arrSize; i++)
        cout << arr[i] << ' ';

    return 0;
}
void insertionSort(int a[], int aSize){
    int sortedPlace, unsortedPlace, currentNum;

    for(int sortedPlace=1; sortedPlace<aSize; sortedPlace++){
        currentNum=a[sortedPlace];
        unsortedPlace=sortedPlace;

        while(unsortedPlace>0 && a[unsortedPlace-1] > currentNum){
            a[unsortedPlace]=a[unsortedPlace-1];
            unsortedPlace--;
        }
        a[unsortedPlace]=currentNum;
    }
}
void swapInts(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
