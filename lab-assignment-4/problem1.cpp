#include <iostream>
using namespace std;
int main()
{
    int a,temp=0;
    cout<<"Enter a single-digit number: ";

    cin>>a;
    temp=a;
    if(a/10<1)
    {
        cout<<endl;
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=temp;j++)
            {
                cout<<j;

            }
            for(int l=2;l<=i;l++)cout<<" ";
            for(int l=2;l<=i;l++)cout<<" ";
            for(int k=temp;k>0;k--)
            {
                cout<<k;

            }temp--;
            cout<<endl;
        }
    }else
    {
        cout<<"Please enter a single-digit number";
    }

    return 0;
}
