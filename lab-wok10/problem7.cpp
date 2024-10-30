#include <iostream>;
using namespace std;
int num(int a, int b){
    if(b==1)
    {
        return a;
    }b--;
    return a*num(a,b);


}
int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a>>b;
    cout<<num(a,b);
}