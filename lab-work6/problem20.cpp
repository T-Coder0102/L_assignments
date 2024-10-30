#include <iostream>;
using namespace std;
bool isLeapYear(int year)
{
    bool isLeapYear = false;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        isLeapYear = true;
    }
    return isLeapYear;
}
int daysBetweenTwoDates(int year1, int month1, int day1, int year2, int month2, int day2)
{
    int days =0;
};