#include <iostream>;
using namespace std;
template<typename T>
 void num(T a){
    if(a==0)
    {
        return;
    }cout<<a<<" ";
     num(a-1);

}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    num(a);
}