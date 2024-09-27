#include <iostream>;
using namespace std;
int main()
{
    for(char ch=65;ch<=90;ch++)
    {

        if(ch%5==0)
        {
            cout<<endl;
        }
        cout<<ch<<" ";
    }
}