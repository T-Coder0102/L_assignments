#include <iostream>;
using namespace std;
int main()
{
    int a,max=0;
    while(true)
    {
        cin>>a;
        if(a>max)
        {
            max=a;
        }
        if(a==0)
        {
            break;
        }
    }cout<<"Max is "<<max<<endl;
    return 0;
}