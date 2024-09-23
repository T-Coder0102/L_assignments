#include <iostream>;
using namespace std;
int main()
{
    float a,b;
    char s;
    cin>>a>>s>>b;
    switch(s)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
        default:
            cout<<"Invalid Input";
    }
}