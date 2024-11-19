#include <iostream>;
using namespace std;
int main()
{
    int n;
    double sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    double num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
    }
    cout<<"The average is: "<<sum/n;
}