#include <iostream>;
using namespace std;
int main()
{
    double Pi=0;
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=1;i<=2*a-1;i+=2)
    {
        if(a%10000==0)
        {
            Pi=4*(1/float(i)-1/float(i+2)+1/float(i+4));
        }
    }
    cout<<"Pi= "<<Pi;
}