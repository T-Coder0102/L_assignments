#include <iostream>;
using namespace std;
int main()
{
    char letter;
    cin>>letter;
    if(letter>=97 && letter<=122)
    {
        cout<<"Lowercase alphabet";
    }else if(letter>=65 && letter<=90)
    {
        cout<<"Uppercase alphabet";
    }
    else
    {
        cout<<"It is not an alphabet";
    }
}