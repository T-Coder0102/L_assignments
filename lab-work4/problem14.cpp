#include <iostream>;
using namespace std;
int main()
{
    int a;
    float sum=0;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        sum+=1/float(i);
        if(i==a){cout<<"1/"<<i; break;}
        cout<<1<<"/"<<i<<"+";

    }cout<<endl;
    cout<<"The sum is "<<sum<<endl;
}