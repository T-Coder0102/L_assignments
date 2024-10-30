#include <iostream>;
using namespace std;
int main()
{
    int pass=1999,temp;
    cout<<"Please enter your password: ";
    while(true)
    {
        cin>>temp;
        if(temp==pass)
        {
            cout<<"Correct"<<endl;
            break;
        }else
        {
            cout<<"Wrong"<<endl;
        }
    }
}