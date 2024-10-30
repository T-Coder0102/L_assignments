#include <iostream>;
using namespace std;
int minutes(int hour1, int hour2, int min1,int min2)
{
    int minutes = 0;
    if((min2-min1)<0)
    {
        minutes=minutes+(min2+60-min1);
        minutes=minutes+(hour2-1-hour1)*60;
    }else
    {
        minutes=minutes+(min2-min1)+(hour2-hour1)*60;
    }return minutes;
}
int main()
{
    int hour1,hour2,min1,min2;
    cout<<"Enter the first hour and minutes: ";
    cin>>hour1>>min1;
    cout<<"Enter the second hour and minutes: ";
    cin>>hour2>>min2;
    cout<<minutes(hour1,hour2,min1,min2)<<" minutes"<<endl;
}