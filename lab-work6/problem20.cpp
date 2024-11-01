#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int month(int month,int year1)
{
    int day=0;
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        day = isLeapYear(year1) ? 29 : 28;
        break;
    }
    return day;
}

int calculateDaysDifference(int year1, int month1, int day1, int year2, int month2, int day2) {
    int totalDays = 0;
    for (int i = month1; i <= 12; i++) {
        int daysInMonth=month(i,year1);

        totalDays += daysInMonth - day1;
        day1 = 1;
    }
    for (int i = year1 + 1; i < year2; i++) {
        totalDays += isLeapYear(i) ? 366 : 365;
    }
    for (int i = 1; i < month2; i++) {
        int daysInMonth=month(i,year2);
        totalDays += daysInMonth;
    }
    totalDays += day2;

    return totalDays;
}

int main() {
    int year1, month1, day1, year2, month2, day2;

    cout << "Enter the first date (YYYY MM DD): ";
    cin >> year1 >> month1 >> day1;
    cout << "Enter the second date (YYYY MM DD): ";
    cin >> year2 >> month2 >> day2;

    int daysDifference = calculateDaysDifference(year1, month1, day1, year2, month2, day2);
    cout << "The number of days between the two dates is: " << daysDifference << endl;

    return 0;
}