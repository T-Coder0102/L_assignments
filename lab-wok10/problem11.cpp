#include <iostream>;
using namespace std;
int num(int a, int b){
    if(a==1)
    {
        return b;
    }a--;
    return b+num(b,a);


}
int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a>>b;
    cout<<num(a,b);
}