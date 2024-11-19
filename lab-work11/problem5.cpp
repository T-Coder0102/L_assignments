#include <iostream>;
using namespace std;
bool strictlyEqual(const int list1[], const int list2[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(list1[i]==list2[i])
        {
            count++;
        }
    }
    if(count==size)
    {
        return true;
    }else
    {
        return false;
    }
}
int main()
{
    int size;
    int list1[size],list2[size];
    cout<<"Enter the size of the list: ";
    cin>>size;
    cout<<"Enter the elements of the first list: ";
    for(int i=0;i<size;i++)
    {
        cin>>list1[i];
    }
    cout<<"Enter the elements of the second list: ";
    for(int i=0;i<size;i++)
    {
        cin>>list2[i];
    }
   if(strictlyEqual(list1,list2,size))
   {
       cout<<"Two lists are strictly identical";
   }else
   {
       cout<<"Two lists are not strictly identical";
   }
}