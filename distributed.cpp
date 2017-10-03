#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cout << "Please enter 4 integers: ";
    cin >> a >> b >> c >> d;
    cout << "(" << a << " + " << b << ") X (" << c << " + " << d << ") = " << a+b << " X " << c+d << " = " << (a+b)*(c+d) << endl;
    cout << a << "X" << c << " + " << a << "X" << d << " + " << b << "X" << c << " + " << b << "X" << d << " = "
        << a*c << " + " << a*d << " + " << b*c << " + " << b*d << " = " << (a*c)+(a*d)+(b*c)+(b*d) << endl;
    return 0;
}
