#include <iostream>;
using namespace std;
int main()
{
    int n,x,f=1,temp=0;
    cout<<"Enter two integers: ";
    cin>>n>>x;
        if(n==1 || n==2)
        {
            cout<<f;
        }else
        {
            while(true)
            {
                if(temp==n)
                {
                    cout<<f;
                    break;
                }
                if(temp==x*f-(x-3))
                {
                    f++;
                }temp++;
            }
        }
}