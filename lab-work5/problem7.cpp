#include <iostream>;
using namespace std;
int main()
{
    int y,m,d,h=0,k=0,j=0;
    cout<<"Enter year: (e.g.,2012): ";
    cin>>y;
    cout<<"Enter month: 1-12: ";
    cin>>m;
    cout<<"Enter the day of the month: 1-31: ";
    cin>>d;
    if(m==1)
    {
        m=13;
        y-=1;
    }else if(m==2)
    {
        m=14;
        y-=1;
    }
    k=y%100;
    j=y/100;
    h=(d+26*(m+1)/10+k+k/4+j/4+5*j)%7;
    switch (h)
    {
    case 1:
        cout<<"Day of the week is Sunday";
        break;
    case 2:
        cout<<"Day of the week is Monday";
        break;
    case 3:
        cout<<"Day of the week is Tuesday";
        break;
    case 4:
        cout<<"Day of the week is Wednesday";
        break;
    case 5:
        cout<<"Day of the week is Thursday";
        break;
    case 6:
        cout<<"Day of the week is Friday";
    default:
        {
            cout<<"Day of the week is Saturday";
        }
    }
}