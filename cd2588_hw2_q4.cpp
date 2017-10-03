#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c, soln1, soln2;

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    if(a==0.0 && b==0.0 && c==0.0)
        cout << "This equation has an infinite number of solutions" << endl;
    else if(a==0.0 && b==0.0 && c!=0.0)
        cout << "This equation has no solution" << endl;
    else if(((b*b)-(4*a*c))<0)
        cout << "This equation has no real solutions" << endl;
    else if(a!=0 && ((b*b)-(4*a*c))==0) {
        soln1=((b*-1)+sqrt((b*b)-(4*a*c)))/(2*a);
        cout << "This equation has a single real solution x=" << fixed << setprecision(1) << soln1 << endl;
    }
    else {
        soln1=((b*-1)+sqrt((b*b)-(4*a*c)))/(2*a);
        soln2=((b*-1)-sqrt((b*b)-(4*a*c)))/(2*a);
        cout << "This equation has two real solutions x1=" << fixed << setprecision(1) << soln1 << ", x2=" << soln2 << endl;
    }

    return 0;
}
