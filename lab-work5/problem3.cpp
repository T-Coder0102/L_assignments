#include <iostream>;
using namespace std;
int main()
{
    int a,b=0,c=1,sum=0;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<b<<" "<<c<<" ";
    for(int i=1;i<=a-1;i++)
    {
        sum=b+c;
        b=c;
        c=sum;
        cout<<sum<<" ";
    }
}