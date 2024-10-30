#include <iostream>;
using namespace std;
template<typename T>
 int num(T a){
    if(a==0)
    {
        return 0;
    }return a+num(a-1);

}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<num(a);
}