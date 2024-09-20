#include <iostream>;
using namespace std;
int main()
{
    char lan;
    cin>>lan;
    switch(lan)
    {
    case 'u':
        cout<<"Assalomu alaykum";
        break;
    case 'e':
        cout<<"Hello";
        break;
    case 'r':
        cout<<"Privet";
        break;
    case 'g':
        cout<<"Hallo";
        break;
    default:
        cout<<"I do not this language:(";
    }
}