#include <iostream>
using namespace std;
int main() {

	int daysJohn, hoursJohn, minutesJohn;
	int daysBill, hoursBill, minutesBill;
	int totalDays, totalHours, totalMinutes;

	cout << "Please enter the number of days John has worked: ";
	cin >> daysJohn;
	cout << "Please enter the number of hours John has worked: ";
	cin >> hoursJohn;
	cout << "Please enter the number of minutes John has worked: ";
	cin >> minutesJohn;

	cout << "\n" << "Please enter the number of days Bill has worked: ";
	cin >> daysBill;
	cout << "Please enter the number of hours Bill has worked: ";
	cin >> hoursBill;
	cout << "Please enter the number of minutes Bill has worked: ";
	cin >> minutesBill;

	totalDays = daysJohn + daysBill;
	totalHours = hoursJohn + hoursBill;
	totalMinutes = minutesJohn + minutesBill;

	totalHours = totalHours + (totalMinutes/60);
    totalMinutes = totalMinutes % 60;
	totalDays = totalDays + (totalHours / 24);
	totalHours = totalHours %24;


	cout << "\n" << "The total time both of them worked together is: " << totalDays << " days, "
		 << totalHours << " hours and " << totalMinutes << " minutes." << endl;

	return 0;
}
