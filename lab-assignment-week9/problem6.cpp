#include <iostream>

using namespace std;
template<typename T>
void mid_value(T a, T b, T c)
{
    if(a>b && b>c || c>b && b>a)
    {
        cout<< b<<endl;
    }
    if(a>c && c>b || b>c && c>a)
    {
        cout<< c<<endl;
    }
    if(b>a && a>c || c>a && a>b)
    {
        cout<< a<<endl;
    }
}


int main()
{
    mid_value('d', 'b', 'a');
    mid_value(15, 18 , 16);
}
