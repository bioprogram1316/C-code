#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize);
void valInArr(int arr[], int arrSize, int val);
const int MAX_ARR_SIZE = 20;

int main() {
    int integers[MAX_ARR_SIZE];
    int minVal;

    cout << "Please enter 20 integers separated by a space:" << endl;
    for(int i = 0; i < MAX_ARR_SIZE; i++)
        cin >> integers[i];

    minVal = minInArray(integers, MAX_ARR_SIZE);

    cout << "The minimum value is " << minVal << ", and it is located in the following indices: ";
    valInArr(integers, MAX_ARR_SIZE, minVal);

    return 0;
}
int minInArray(int arr[], int arrSize){
    int minVal, currVal;
    minVal = arr[0];
    for(int ind = 0; ind < arrSize; ind++){
        currVal=arr[ind];
        if(currVal < minVal)
            minVal = currVal;
    }

    return minVal;
}
void valInArr(int arr[], int arrSize, int val){

    for(int ind = 0; ind < arrSize; ind++){
        if(arr[ind]==val)
            cout << ind << " ";
    }
    cout << endl;
}

