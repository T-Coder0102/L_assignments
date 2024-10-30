#include <iostream>;
using namespace std;
template<typename T>
void swap_values(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    double a,b;
    cin>>a>>b;
    cout<<"a="<<a<<"b="<<b<<endl;
    swap_values(a,b);
    cout<<"a="<<a<<"b="<<b<<endl;
}