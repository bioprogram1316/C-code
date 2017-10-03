#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double price1, price2, basePrice;
    char card;
    double taxRate, discount;

    cout << "Enter price of first item: ";
    cin >> price1;
    cout << "Enter price of second item: ";
    cin >> price2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> card;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    taxRate=taxRate/100.0;
    basePrice=price1+price2;
    if(price1>price2)
        discount=price1+(price2*0.5);
    else
        discount=price2+(price1*0.5);

    cout << "Base price: " << fixed << setprecision(1) << basePrice << endl;
    cout << "Price after discounts: ";

    if(card=='y' || card=='Y') {
        discount=discount-(discount*.10);
        cout << discount << endl;
    }
    else
        cout << discount << endl;

    cout << "Total price: " << fixed << setprecision(5) << discount+(discount*taxRate) << endl;

    return 0;
}
