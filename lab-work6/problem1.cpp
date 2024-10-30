#include <iostream>
using namespace std;
void displayPattern(int n)
{
    for (int i = n; i >=1; i-=2)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }cout<<endl;
    }
};
int main()
{
    int a;
    cout<<"Enter an integer: ";
    cin>>a;
    displayPattern(a);
    return 0;
}
