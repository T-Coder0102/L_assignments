#include <iostream>;
using namespace std;
int main()
{
    float p1,p2,w1,w2,a,b;
    cout<<"Enter weight and price for package 1: ";
    cin>>w1>>p1;
    cout<<"Enter weight and price for package 2: ";
    cin>>w2>>p2;
    a=float(w1/p1);
    b=float(w2/p2);
    if(a<b)
    {
        cout<<"Package 2 has better price";
    }else if(a>b)
    {
        cout<<"Package 1 has better price";
    }else
    {
        cout<<"Two packages have the same price";
    }

}