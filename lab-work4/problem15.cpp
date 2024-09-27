#include <iostream>;
#include <cmath>;
using namespace std;
int main()
{
    int a=1000,num=1;
    double sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<"For year number "<<num++<<" rent is "<<12*a*pow(1.03,i)<<endl;
        sum+=12*a*pow(1.03,i);
    }cout<<"For all 5 years total rent is "<<sum<<endl;
}