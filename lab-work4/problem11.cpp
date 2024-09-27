#include <iostream>;
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=0;i<a*a;i++)
    {
        if(i%a==0)
        {
            cout<<endl;
        }
        cout<<"*";
    }
}