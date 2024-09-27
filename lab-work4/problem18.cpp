#include <iostream>;
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int temp=a;
    for(int i=2;i<=sqrt(a);i++)
    {
        while(temp%i==0&&temp!=1)
        {
            temp=temp/i;
            cout<<i<<" ";
        }
    }
}