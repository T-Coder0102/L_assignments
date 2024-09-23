#include <iostream>;
using namespace std;
int main()
{
    char g;
    double h;
    cin>>g>>h;
    if(g=='M')
    {
        if(h<1.70)
        {
            cout<<"Short"<<endl;
        }
        else if(h>=1.70 && h<1.85)
        {
            cout<<"Normal"<<endl;
        }
        else
        {
            cout<<"Tall"<<endl;
        }
    }else
    {
        if(h<1.60)
        {
            cout<<"Short"<<endl;
        }
        else if(h>=1.60 && h<1.75)
        {
            cout<<"Normal"<<endl;
        }
        else
        {
            cout<<"Tall"<<endl;
        }
    }
}
