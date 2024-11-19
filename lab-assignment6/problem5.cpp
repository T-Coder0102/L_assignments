#include <iostream>;
using namespace std;
int main()
{
    int n,Count=0;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int count=0;
        for (int j = 0; j < 4; j++)
        {
            if(i%arr[j]==0)
            {
                count++;
            }
        }
        if(count>0)
        {
            Count++;
        }

    }
    cout << Count << endl;

}