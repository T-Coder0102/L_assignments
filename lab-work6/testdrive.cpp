#include <iostream>
using namespace std;
// int a=90;
// void fun(int a)
// {
//     a=100;
//     cout<<"function: "<<a<<endl;
// }
// int main()
// {
//     int a=80;
//     fun(a);
//     cout<<"main: "<<a<<endl;
//     cout<<"global: "<<::a<<endl;
// }


// void area(double r)
// {
//     cout<<"The Area: "<<3.14*r*r<<endl;
// }
// void area(double a, double b)
// {
//     cout<<"The Area: "<<a*b<<endl;
// }
// void f(int &num)
// {
//     num+=10;
//     cout<<num<<endl;
//     cout<<"Num: "<<&num<<endl;
// }
// int main()
// {
//     int a=150;
//     cout<<a<<endl;
//     cout<<"a:"<<&a<<endl;
//     f(a);
//     cout<<a<<endl;
// }

// // Template
// template<typename T, typename T2>
// T sum(T a , T2 b)
// {
//     return a + b;
// }
// int main()
// {
//     cout<<sum(2,3)<<endl;
//     cout<<sum(3.002,'A')<<endl;
//     cout<<sum('A', 'J');
// }

int sum(int a)
{
    if(a<0) //condition to stop
    {
        return 0;
    }if(a%2==1)
    {
        return a+sum(a-2);
    }

}
int main ()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<sum(a);
}