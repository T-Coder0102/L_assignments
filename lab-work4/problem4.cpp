#include <iostream>;
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i%10==0)
        {
            cout<<i<<" ";
        }
    }
}