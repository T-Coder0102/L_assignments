#include <iostream>
using namespace std;
int count_digit(int digit, int num)
{
    int counter=0;
    while(num>0)
    {
        if(num%10==digit)counter++;
        num/=10;
    }
    return counter;
}
int main()
{
    int n;
    cout<<" Enter a number: ";
    cin>>n;
    for(int i=0;i<=9;i++)
    {
        cout<<"The fequency of "<<i<<" = "<<count_digit(i,n)<<endl;
    }
}