#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
bool isLeapYear(int year);
void printYearCalender(int year, int startingDay);

int main() {

    int year, yearStartingDay;

    cout << "Please enter a year and the starting day of the week (separated by a space).\n"
        << "Use numbers 1 - 7 to represent Monday - Sunday:" << endl;
    cin >> year >> yearStartingDay;

    printYearCalender(year, yearStartingDay);

    return 0;
}
int printMonthCalender(int numOfDays, int startingDay){
    int lastDay;
    lastDay=(((numOfDays-1)%7) + startingDay)%7;
    if (lastDay == 0)
        lastDay = 7;

    cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << endl;
    for(int spaces=1; spaces<startingDay; spaces++)
        cout << "\t";
    for(int counter=1; counter<=numOfDays; counter++){
        cout << counter << "\t";
        if((counter+startingDay-1)%7==0)
            cout << endl;
    }
    return lastDay;
}

bool isLeapYear(int year){
    if(year%4==0 && (year%100!=0 || (year%100==0 && year%400==0)))
       return true;
    else
       return false;
}

void printYearCalender(int year, int startingDay){
    int lastDay, firstDay;
    bool leapYear=isLeapYear(year);

    cout << "January " << year << endl;
    lastDay=printMonthCalender(31, startingDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nFebruary " << year << endl;
    if(leapYear)
        lastDay=printMonthCalender(29, firstDay);
    else
        lastDay=printMonthCalender(28, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nMarch " << year << endl;
    lastDay=printMonthCalender(31, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nApril " << year << endl;
    lastDay=printMonthCalender(30, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nMay " << year << endl;
    lastDay=printMonthCalender(31, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nJune " << year << endl;
    lastDay=printMonthCalender(30, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nJuly " << year << endl;
    lastDay=printMonthCalender(31, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nAugust " << year << endl;
    lastDay=printMonthCalender(31, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nSeptember " << year << endl;
    lastDay=printMonthCalender(30, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nOctober " << year << endl;
    lastDay=printMonthCalender(31, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nNovember " << year << endl;
    lastDay=printMonthCalender(30, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;

    cout << "\nDecember " << year << endl;
    lastDay=printMonthCalender(31, firstDay);
    if(lastDay==7)
        firstDay=1;
    else
        firstDay=lastDay+1;
}

