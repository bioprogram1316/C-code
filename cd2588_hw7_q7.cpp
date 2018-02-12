#include <iostream>
using namespace std;

int findChange(int arr01[], int arr01Size);
int main(){
    int arr[8]={0, 0, 0, 0, 0, 1, 1, 1};
    int arrSize=8;
    int first1Ind;

    first1Ind=findChange(arr, arrSize);
    cout << first1Ind << endl;

    return 0;
}
int findChange(int arr01[], int arr01Size){
    for(int i=0; i<arr01Size; i++){
        if(arr01[i]==1)
            return i;
    }
}
