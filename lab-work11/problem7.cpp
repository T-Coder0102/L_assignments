#include <iostream>;
#include <ctime>
using namespace std;
void sortFunction(int array[],int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    sortFunction(array,size);

}