#include <iostream>
using namespace std;
#include "problems.h"


int main()
{
    int day,year=0;
    cout<<"Enter the number of days: ";
    cin>>day;
    int *days=&day,*years=&year;
    days2years(*days,*years);
    cout<<"Years: "<<*years<<" "<<"Days: "<<*days<<endl;
    return 0;
}
