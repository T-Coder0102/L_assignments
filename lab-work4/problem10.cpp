#include <iostream>;
using namespace std;
int main()
{
    int a, sum=0,pos=0,neg=0;
    cout<<"Enter an integer, the input ends if it is 0: ";
    while(1)
    {

        cin>>a;
        if(a>0)pos++;
        if(a<0)neg++;
        sum+=a;
        if(a==0)
        {
            break;
        }
    }cout<<"The number of positives is "<<pos<<"\n"<<"The number of negatives is "<<neg<<"\n"<<"The total is "<<sum<<"\n"<<"The average is "<<float(sum)/(pos+neg);
}