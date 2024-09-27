#include <iostream>;
using namespace std;
int main()
{
    int t,N,temp=0;
    cout<<"Enter number of cases: "<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>N;
        while(N>0)
        {
            temp=N%10;
            N=N/10;
            cout<<temp<<" ";
        };
    }
}