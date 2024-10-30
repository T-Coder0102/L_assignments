#include <iostream>;
using namespace std;
int getType(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }return count;

}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(getType(a)%2==1){
        cout<<"The number of digits is odd";
    }
    else
    {
        cout<<"The number of digits is even";
    }
    return 0;
}