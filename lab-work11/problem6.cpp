#include <iostream>;
using namespace std;
void detectType(char array[], int size)
{
    int upper=0,lower=0,digit=0,spec=0;
    for(int i=0;i<size;i++)
    {
        if(array[i]>=65 && array[i]<=90)
        {
            upper++;
        }
        else if(array[i]>=97 && array[i]<=122)
        {
            lower++;
        }
        else if(array[i]>=48 && array[i]<=57)
        {
            digit++;
        }
        else
        {
            spec++;
        }
    }
    cout<<"Uppercase letters: "<<upper<<endl<<"Lowercase letters: "<<lower<<endl<<"Digits: "<<digit<<endl<<"Specials: "<<spec<<endl;

};
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    char array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    detectType(array,n);
}