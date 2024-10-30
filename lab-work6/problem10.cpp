#include <iostream>;
using namespace std;
void revChar(char c)
{
    if(c>=97 && c<=122)
    {
        c-=32;
        cout<<char(c);
    }
    else if(c>=65 && c<=90)
    {
        c+=32;
        cout<<char(c);
    }
}
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    revChar(c);
}