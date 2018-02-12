#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int C_STRING_LENGTH = 20;

char* reverseCString(char arr[], int size);
void swapChar(char &c1, char &c2);
int main() {
    char* revCString;
	char CString[C_STRING_LENGTH]="Think big";
	int stringSize=strlen(CString);

	revCString = reverseCString(CString, stringSize);

    for(int i=0; i<stringSize; i++)
        cout << revCString[i];
    cout << endl;

	return 0;
}
char* reverseCString(char arr[], int size) {
	char *startPtr, *endPtr;
	startPtr = arr;
    endPtr = arr + (size*1/2);
	int startVal = 0;
	int endVal = size - 1;

	while (endVal-startVal>=1) {
		swapChar(arr[startVal], arr[endVal]);
		startPtr++; startVal++;
		endPtr--; endVal--;
	}
	return endPtr;
}
void swapChar(char &c1, char &c2) {
	char temp;
	temp = c1;
	c1 = c2;
	c2 = temp;
}
