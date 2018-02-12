#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main(){
    string word;
    bool palindrome;

    cout << "Please enter a word: ";
    cin >> word;

    palindrome = isPalindrome(word);
    if(palindrome)
        cout << word << " is a palindrome" << endl;
    else
        cout << word << " is not a palindrome" << endl;

    return 0;
}
bool isPalindrome(string str){
    string strReversed;

    for(int i = str.length()-1; i >= 0; i--)
        strReversed += str[i];
    if(str==strReversed)
        return true;
    else
        return false;
}
