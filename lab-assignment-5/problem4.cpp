#include <iostream>;
using namespace std;
int maxProfit(int arr[],int n)
{
    int mProfit = 0;
    int minPrice= 100000;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minPrice)
        {
            minPrice = arr[i];
        }
        int profit=arr[i]-minPrice;
        if(profit>mProfit)
        {
            mProfit = profit;
        }
    }
    return mProfit;
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
    cout<<"Maximum profit is: "<<maxProfit(arr,n);
}