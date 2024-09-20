#include <iostream>;
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch (a>0)
    {
    case 1:
        cout<<"Positive";
        break;
    case 0:
        switch(a==0)
        {
            case 1:
                cout<<"It is zero";
                break;
            default:
        cout<<"Negative";
        }

    }
}