#include <iostream>;
using namespace std;
int a(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n*a(n,p-1);
}
int main()
{
    int n,p;
    cout<<"Enter the number: ";
    cin>>n>>p;
    cout<<"The power is: "<<a(n,p);
}