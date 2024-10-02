#include <iostream>;
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(c%a==0 && c%b==0)
    {
        cout<<a<<", "<<b<<" "<<"are factors of "<<c<<endl;
    }else
    {
        cout<<a<<", "<<b<<" "<<"are not factors of "<<c<<endl;
    }
}
