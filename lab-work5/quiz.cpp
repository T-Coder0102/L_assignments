#include <iostream>;
using namespace std;
int main()
{
    int n;
    bool flag=true;
    cin>>n;
    while(n>0)
    {
        {
            flag=false;
            cout<<"NO";
            return 0;
        }n/=10;
        if(flag)
        {
            cout<<"YES"<<endl;
        }
    }
}