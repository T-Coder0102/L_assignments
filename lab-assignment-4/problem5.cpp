#include <iostream>;
using namespace std;
int main()
{
    int n,a=1,r=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(true)
    {
        if(a%3!=0 && (a-3)%10!=0)
        {
            r++;
            if(r==n){
                cout<<a<<endl;
                break;
            }
            a++;
        }else
        {
            a++;
        }
    }
}