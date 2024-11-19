#include <iostream>;
using namespace std;
int main()
{
    int a=9;
    int *ptr=&a;
    cout<<*ptr<<" "<<&a<<endl;
    cout<<a++<<" "<<*ptr<<endl;
    int b=11;
    ptr=&b;
    cout<<ptr<<" "<<&b<<endl;
    cout<<*ptr<<" "<<a<<endl;
    return 0;
}