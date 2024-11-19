#include <iostream>;
using namespace std;
int indexOfLargestElement(double array[], int size)
{
    int max = array[0],index;
    array[size];
    for(int i = 0; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    for(int i = 0; i < size; i++)
    {
        if(array[i] == max)
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    int size=15;
    if(size<=0)
    {
        cout<<-1;
    }else
    {
        double array[size];
        for(int i = 0; i < size; i++)
        {
            cout<<"Enter value of element "<<i+1<<": ";
            cin>>array[i];
        }
        cout<<indexOfLargestElement(array, size);
    }
}