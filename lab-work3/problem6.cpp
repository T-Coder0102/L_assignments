#include <iostream>;
#include <math.h>
using namespace std;
int main()
{
    float a,b,c;
    double d;
    cin>>a>>b>>c;
    d=sqrt(b*b-4*a*c);
    if(d>0)
    {
        cout<<"x1="<<(-b+d)/(2*a)<<"\n";
        cout<<"x2="<<(-b-d)/(2*a);
    }
    else if(d==0)
    {
        cout<<"x1="<<(-b/(2*a));
    }else
    {
        cout<<"Function does not have roots";
    }
}