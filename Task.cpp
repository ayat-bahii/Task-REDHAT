#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int main() {
    int day, month, year;
    int totalDays = 0;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;    
    for (int y =1970; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    for (int m =1; m < month ; m++) {
        totalDays += daysInMonth[m-1];
    }
    totalDays += day - 1; // Subtract 1 because we want the number of days before the given date
    cout << "Total days since 1970-01-01: " << totalDays << endl;   
    return 0;
}