#include <iostream>;
#include <time.h>
using namespace std;
int main()
{
    int a,b;

    srand(time(0));
    a = rand();
    cout<<"Guess the number if it is even or odd(if you think it is even enter 0, otherwise 1): ";
    cin>>b;
    if(a%2==0)
    {
        if(b==1)
        {
            cout<<"Your guess is incorrect\n"<<"The number was "<<a;
        }else
        {
            cout<<"Your guess is correct\n"<<"The number is "<<a;
        }
    }else if(a%2!=0)
    {
        if(b==1)
        {
            cout<<"Your guess is correct\n"<<"The number is "<<a;
        }else
        {
            cout<<"Your guess is incorrect\n"<<"The number was "<<a;
        }
    }
}