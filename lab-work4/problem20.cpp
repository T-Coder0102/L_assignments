#include <iostream>;
#include <thread>
#include <windows.h>;
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number of seconds: ";
    cin>>a;
    while(a>1)
    {
        cout<<--a<<" seconds remaining"<<endl;
        this_thread::sleep_for(1000ms);
    }cout<<"Stopped";

}