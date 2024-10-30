#include <iostream>;
using namespace std;
template<typename T>
 double sum(T a){
    if(a==1)
    {
        return 1;
    }return (1/(a*a))+sum(a-1);

}
int main()
{
    double a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<sum(a);
}