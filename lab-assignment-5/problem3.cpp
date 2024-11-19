#include <iostream>;
using namespace std;
void finderFunction(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int counter=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                counter++;
            }
        }
        if(counter==1)
        {
            cout<< arr[i];
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    finderFunction(arr,n);
}