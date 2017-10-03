#include <iostream>
using namespace std;
int main() {
	double bread, pb, jelly;

	cout << "Enter the number of calories per bread slice: ";
	cin >> bread;

	cout << "Enter the number of ounces of peanut butter you use: ";
	cin >> pb;

	cout << "Enter the number of ounces of jelly you use: ";
	cin >> jelly;


	cout << "YOUR SANDWICH: " << ((bread*2)+(7*(pb*28))+(2*(jelly*28))) << " CALORIES"; //calories per sandwich

	return 0;
}
