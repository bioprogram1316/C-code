#include <iostream>
using namespace std;
int main() {
    int price, items, totalcost;
    cout << "Please type the item price in cents and then the number of items purchased. Then hit RETURN." << endl;
    cin >> price;
    cin >> items;
    totalcost = price*items;

    int dollars, cents;
    string result;
    dollars = totalcost/100;
    cents = totalcost-(dollars*100);


    //result = (cents<10? 0 , cents : cents);


    cout << dollars << ".";
    (cents<10? (cout << "0" << cents) : (cout << cents));

                                //result;

    //cout << "$" << dollars << "." << (cents>0? (cents<10? (cents=cents*10) : cents=cents) : cents=);

    return 0;
}
