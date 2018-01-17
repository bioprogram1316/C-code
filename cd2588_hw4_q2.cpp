#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main() {
    int triangles;
    char symbol;

    cout << "Please enter the number of triangles you would like and the"
        <<" character filling the tree (separated by a space):" << endl;
    cin >> triangles >> symbol;

    printPineTree(triangles, symbol);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol) {
    for(int line=1; line<=n; line++){
        int shapesCount=2*(line-1)+1;

        for(int space= 1; space <= (n-line)+m; space++)
            cout << ' ';

        for(int shapes=1; shapes<=shapesCount; shapes++)
            cout << symbol;
        cout << endl;
    }
}

void printPineTree(int n, char symbol){
    int triangleSize=2, margin=n-1;
    for(int triangles=1; triangles<=n; triangles++){
        printShiftedTriangle(triangleSize, margin, symbol);
        triangleSize++;
        margin--;
    }
}
