#include <iostream>;
using namespace std;
int main()
{
    int a;
    cout<<"a three-digit integer: ";
    cin>>a;
    if(a/100<10 && a/100>=1)
    {
        if(a/100==a%10)
        {
            cout<<a<<" is a palindrome";
        }else
        {
            cout<<a<<" is not a palindrome";
        }
    }else
    {
        cout<<"Please enter 3-digit number";
    }
}