#include <iostream>
using namespace std;

int main()
{
    int n=1,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    double numbers[n];
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=numbers[i];
    }
    cout<<"sum="<<sum;
    return 0;
}
