#include <iostream>;
using namespace std;
int findCentury(int n)
{
    int century =0;
    if(n%100==0)
    {
        century=n/100;
    }else
    {
        century=n/100+1;
    }
    return century;
}
int main()
{
    int n;
    cout<<"Enter a year:";
    cin>>n;
    if(n>0)
    {
        cout<<"The century is: "<<findCentury(n);
    }else
    {
        cout<<"The given year is invalid";
    }
}