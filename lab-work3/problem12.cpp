#include <iostream>;
using namespace std;
int main()
{
    char letter;
    cin>>letter;
    switch (letter)
    {
    case 'g':
        cout<<"Go!";
        break;
    case 'y':
        cout<<"Get Ready!";
        break;
    case 'r':
        cout<<"Stop";
        break;
        default:
            cout<<"Wrong Input";
    }
}