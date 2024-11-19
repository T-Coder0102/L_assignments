#include <iostream>;
using namespace std;
int count(const string& s,char a)
{
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==a)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char a;
    cin>>a;
    string s;
    cin>>s;
    cout<<count(s,a);
}