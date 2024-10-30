#include <iostream>;
using namespace std;
template<typename T>
 void num(T a){
    if(a==50)
    {
        cout<<a<<endl;
        return;
    }cout<<a<<" ";
    num(a+1);

}
int main()
{
     num(1);
}