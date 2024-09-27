#include <iostream>;
#include <math.h>;
using namespace std;
int main()
{
    int a,r=0,sum=0,count=0;
    cout<<"Enter a number: ";
    cin>>a;
    while(a>0)
    {
        r=a%10;
        a/=10;
        sum+=r*pow(2,count);
        count++;

    }
    cout<<"The decimal number is "<<sum<<endl;
}