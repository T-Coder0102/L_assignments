#include <iostream>;
#include <cmath>
using namespace std;
int counter(int n)
{
    int square =n*n;
    int counter =0;
    while(square>0)
    {
        counter++;
        square=square/10;
    }return counter;
}
int Reversed(int n)
{
    int square =n*n;
    int reversed =0;
    while(square>0)
    {
        int rem =square%10;
        reversed=reversed*10+rem;
        square=square/10;
    }return reversed;
}
bool isKaprekar(int n)
{
    bool isKapre =false;
    int sum1=0,sum2=0, c=0, count= counter(n);
    int square = n*n;
    int reverse = Reversed(n);
    while(reverse>0)
    {
        c++;
        int rem=reverse%10;
        if(c<=count/2)
        {
            sum1=sum1*10+rem;
        }else
        {
            sum2=sum2*10+rem;
        }reverse=reverse/10;
    }
    if(sum1+sum2==n)
    {
        isKapre=true;
    }
    return isKapre;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Is the number a Kaprekar number: "<<isKaprekar(n)<<endl;
}
