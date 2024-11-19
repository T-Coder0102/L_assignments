#include <iostream>
using namespace std;
void multiplier(int arr1[],int arr2[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr1[i]*arr2[i];
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter first array elements: ";
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter second array elements: ";
        cin>>arr2[i];
    }
    multiplier(arr1,arr2,n);


    return 0;
}
