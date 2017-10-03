#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, absum, cdsum, acprod, adprod, bcprod, bdprod;

    cout << "Please enter four integers: ";
    cin >> a >> b >> c >> d;
    absum=a+b;
    cdsum=c+d;
    acprod=a*c;
    adprod=a*d;
    bcprod=b*c;
    bdprod=b*d;
    cout << "(" << a << "+" << b << ") X (" << c << "+" << d << ") = " << absum << "X" << cdsum << " = " << absum*cdsum << endl;
    cout << a << "X" << c << " + " << a <<"X" << d << " + " << b << "X" << c << " + " << b << "X" << d << " = " << acprod
        << " + "  << adprod << " + " << bcprod << " + " << bdprod << " = " << acprod+adprod+bcprod+bdprod << endl;
    return 0;
}
