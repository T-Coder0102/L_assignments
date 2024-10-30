#include <iostream>;
using namespace std;
template<typename T>
 double product(T a){
    if(a==1)
    {
        return 1.0/3;
    }return 1/(a*(a+2))*product(a-1);

}
int main()
{
    double a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<product(a);
}