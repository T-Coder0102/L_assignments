#include <iostream>;
using namespace std;
void countFunction(int arr[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%arr[i]==0)
            {
                count++;
            }
        }
        if(count==n)
        {
            result+= arr[i];
        }
    }
    if(result>0)
    {
        cout<<result<<endl;
    }else
    {
        cout<<-1<<endl;
    }
}
int main()
{
    int n;
    cout<<"n= ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    countFunction(arr,n);
}
