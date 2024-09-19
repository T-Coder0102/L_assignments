#include <iostream>;
#include <math.h>
using namespace std;
int main()
{
    float x,y,d;
    cin>>x>>y;
    d=sqrt(pow(x,2)+pow(y,2));
    if(d<=10)
    {
        cout<<"Point ("<<x<<","<<y<<") is in circle";
    }else
    {
        cout<<"Point ("<<x<<","<<y<<") is not in circle";
    }
}