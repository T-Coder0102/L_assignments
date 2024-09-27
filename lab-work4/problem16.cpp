#include <iostream>;
using namespace std;
int main()
{
    int a,r,sum=0,reversed=0;
    cout<<"Enter a number: ";
    cin>>a;
    while(a>0)
    {
        r=a%10;
        reversed=reversed*10+r;
        a/=10;
        sum+=r;
    }
    cout<<"The sum of the digits is "<<sum<<endl;
    cout<<"The reversed number is "<<reversed<<endl;
}