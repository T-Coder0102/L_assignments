#include <iostream>;
#include <math.h>;
using namespace std;
int octal2Dec(const int& octalNumber)
{
    int counter=0;
    int octal=octalNumber;
    int sum =0;
    while(octal>0)
    {
        int rem=octal%10;
        sum+=rem*pow(8,counter);
        octal=octal/10;
        counter++;
    }
    return sum;
}
int main()
{
    int ocNum;
    cout<<"Enter a octal number: ";
    cin>>ocNum;
    cout<<"The Decimal equivalent value is: "<<octal2Dec(ocNum)<<endl;
}