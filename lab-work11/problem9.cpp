#include <iostream>;
using namespace std;
void reverseArray(int arr[], int start,int end)
{
    int j;
    for(int i=start; i<end; i++)
    {
        j=end-1;
        if(i>=j)
        {
            break;
        }
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
}
int main()
{
    int arr[5];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr[5],);
}