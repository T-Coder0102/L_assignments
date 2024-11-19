#include <iostream>;
using namespace std;
int main()
{
    int a;
    double minimum=10000000000000;
    cout<<"Enter a number: ";
    cin>>a;
    int min[a];
    for(int i=0;i<a;i++)
    {
        cin>>min[i];
    }
    for(int i=0;i<a;i++)
    {
        if(minimum>min[i])
        {
            minimum=min[i];
        }
    }
    cout<<"Min= "<<minimum;
}