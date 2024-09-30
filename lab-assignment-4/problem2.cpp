#include <iostream>;
using namespace std;
int main()
{
    int t,N,temp=0;
    cout<<"Enter number of cases: "<<endl;
    cin>>t;
    while(t>0)
    {
        cin>>N;
        while(N>0)
        {
            cout<<N%10<<" ";
            N=N/10;
        }t--;
        cout<<endl;
    }
}