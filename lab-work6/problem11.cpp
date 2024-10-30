#include <iostream>;
using namespace std;
double avgOfEvenPlaces(int n)
{
    double sum = 0,average=0;
    int count = 0,counter=0,reversed=0;
    while(n>0)
    {
        int rem=n%10;
        reversed=reversed*10+rem;
        n/=10;
    }
    while(reversed>0)
    {
        counter++;
        int remedy=reversed % 10;
        if(counter%2==0)
        {
            sum+=remedy;
            count++;
        }reversed/=10;
    }
    return average=sum/count;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The average is: "<<avgOfEvenPlaces(n)<<endl;
}