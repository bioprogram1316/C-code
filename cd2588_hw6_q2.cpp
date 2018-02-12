#include <iostream>
using namespace std;

int* insertInSortedArr(int oldArr[], int oldArrSize, int num);
int main() {
	int arr[10] = { 2, 4, 6, 7, 9, 23, 34, 56, 65, 77 };
	int arrSize = 10;
	int* newArr;
	int num = 12;

	newArr = insertInSortedArr(arr, arrSize, num);

	for (int i = 0; i < arrSize + 1; i++) {
		cout << newArr[i] << " ";
	}
	cout << endl;

	delete []newArr;

	return 0;
}
int* insertInSortedArr(int oldArr[], int oldArrSize, int num) {
	int *newArr = new int[oldArrSize + 1];
	int placeHolder=0;

	while ((oldArr[placeHolder] < num) && (oldArr[placeHolder+1] <= num))
		placeHolder++;
    placeHolder++;
    int afterNum = placeHolder + 1;

    for (int i = 0; i <= placeHolder; i++)
        newArr[i] = oldArr[i];

    newArr[placeHolder] = num;
    for (int i = placeHolder; i < oldArrSize; i++) {
        newArr[afterNum] = oldArr[i];
            afterNum++;
    }
	return newArr;
}
