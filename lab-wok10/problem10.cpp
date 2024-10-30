#include <iostream>;
using namespace std;
template<typename T>
 int num(T a){
    if(a==0)
    {
        return a;
    }
    return a%10+num(a/10);

}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<num(a);
}