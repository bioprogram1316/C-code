#include <iostream>
using namespace std;

void printTriangle(int n);
void printOppositeTriangles(int n);
void printRuler(int n);
int power(int a, int b);

int main(){
    int lines=4;

    printTriangle(lines);
    cout << endl;
    printOppositeTriangles(lines);
    cout << endl;
    //printRuler(lines);

    return 0;
}
void printTriangle(int n){
    if(n==1){
        cout << "*" << endl;
    }
    else{
        printTriangle(n-1);

        for(int i=0; i<n; i++){
            cout << "*";
        }
        cout << endl;
    }
}
void printOppositeTriangles(int n){
    if(n==1){
        cout << "*" << endl;
    }
    else {
        for(int stars=1; stars <= n; stars++){
            cout << "*";
        }
        cout << endl;
        printOppositeTriangles(n-1);
    }

    for(int i=0; i<n; i++)
        cout <<"*";
    cout << endl;
}
void printRuler(int n){
    int lines=(power(2, n)-1);

    if(n==4){
        for(int i=1; i<lines; i++){
            if(i==8){
                for(int j=0; j<n; j++)
                    cout << '-';
                cout << endl;
            }
        }
    }
    else{
        printRuler(n-1);
    }
}
int power(int a, int b){
    int res=1;
    for(int i=0; i<b; i++)
        res*=a;
    return res;
}

