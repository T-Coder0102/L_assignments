#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns of matrix:";
    cin>>n>>m;
    int arr[n][m];
    int arr2[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr2[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

}