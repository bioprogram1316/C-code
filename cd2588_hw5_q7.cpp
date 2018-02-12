#include <iostream>
#include <string>
using namespace std;

int numOfWords(string line);
void printLetterCount(string line, char letter);
void makeLowerCase(string &line);

int main(){
    string line;
    char letter;
    int wordCount = 0;

    cout << "Please enter a line of text:" << endl;
    getline(cin, line);
    makeLowerCase(line);

    wordCount = numOfWords(line);
    cout << wordCount << "\twords" << endl;

    for(int letter='a'; letter<='z'; letter++)
        printLetterCount(line, letter);

    return 0;
}
int numOfWords(string line){
    int wordCount = 1;
    char endingPos = ' ';

    for(int placeHolder = 0; placeHolder < line.length(); placeHolder++){
        if(line[placeHolder]==endingPos)
            wordCount++;
    }
    return wordCount;
}
void printLetterCount(string line, char letter){
    int letterCount = 0;

    for(int i = 0; i<line.length(); i++)
        if(line[i]==letter)
            letterCount++;

    if(letterCount>0)
        cout << letterCount << "\t" << letter << endl;
}
void makeLowerCase(string &line){
    for(int i=0; i<line.length(); i++)
        if(line[i]!=' ' && (line[i]>='A' && line[i]<='Z'))
            line[i]+='a'-'A';
}
