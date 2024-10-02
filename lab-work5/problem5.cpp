#include <iostream>;
using namespace std;
int main()
{
    int a,N,min=0,temp=0;
    cin>>a;
    cin>>temp;
    min=temp;
    while(a>1)
    {
        cin>>N;
        if(min>=N)min=N;
        a--;
    }cout<<"The minimum of the numbers is: "<<min<<endl;
}