#include <iostream>;
#include <cmath>
using namespace std;
int countDigits(int a)
{
    int count = 0;
    while (a != 0)
    {
        a/=10;
        count++;
    }
    return count;
};
bool isNarcissistic(int a)
{
    int num=a;
    int sum=0;
    int count = countDigits(a);
    bool isNarcissistic=false;
    while (num != 0)
    {
        int rem=num%10;
        sum=sum+pow(rem,count);
        num/=10;
    }
    if(sum==a)
    {
        isNarcissistic=true;
    }
    return isNarcissistic;
}
int main()
{

    // cout<<isNarcissistic(a)<<endl;
    int counter=0;
    while(true)
    {
        int a=10;
        if(isNarcissistic(a))
        {
            counter++;
            cout<<a<<" ";
            a++;

        }else a++;
        if(counter==15)
        {
            break;
        }
    }
}