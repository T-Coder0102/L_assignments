#include <iostream>;
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w>0)
    {
        switch(w)
        {
        case 1:
            cout<<3500;
            break;
        case 2 ... 3:
            cout<<5500;
            break;
        case 4 ... 10:
            cout<<8500;
            break;
        case 11 ... 20:
            cout<<10500;
            break;
            default:
                cout<<"The package cannot be shipped";
        }
    }else
    {
        cout<<"Invalid input";
    }
}