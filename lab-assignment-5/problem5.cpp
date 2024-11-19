#include <iostream>;
using namespace std;
void counter(string text, string &lower, string &upper)
{
    for(int i=0;i<text.length();i++)
    {
        if(text[i]>=97 && text[i]<=122)
        {
            lower+=text[i];
        }
        if(text[i]>=65 && text[i]<=90)
        {
            upper+=text[i];
        }
    }
}
int main()
{
    string text,lower, upper;
    cout<<"Enter the text: ";
    cin>>text;
    counter(text,lower,upper);
    cout<<upper.length()<<" ";
    for(int i=0;i<upper.length();i++)
    {
        cout<<upper[i]<<" ";
    }
    cout<<endl;
    cout<<lower.length()<<" ";
    for(int i=0;i<lower.length();i++)
    {
        cout<<lower[i]<<" ";
    }
}