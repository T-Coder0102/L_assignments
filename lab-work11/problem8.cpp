#include <iostream>;
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    cout<<time(0)<<endl;
    int arr[6]={0,0,0,0,0,0};
    int r;
    srand(time(0));

    for(int i=0;i<100000000;i++)
    {
        r=1+rand()%6;
        arr[r-1]++;
    }
    for(int i=0;i<6;i++)
    {
        cout<<i+1<<" "<<arr[i]<<endl;
    }
    cout<<time(0);
}