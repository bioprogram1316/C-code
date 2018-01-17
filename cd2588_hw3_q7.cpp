#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Please enter a positive integer:" << endl;
    cin >> n;

    //print n number of rows
    for(int rows=1; rows<=n; rows++) {
    //print n number of columns
        for(int columns=1; columns<=n; columns++)
            cout << columns*rows << "\t";
    //separate each row
        cout << endl;
    }

    return 0;
}
