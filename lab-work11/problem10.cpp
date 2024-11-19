#include <iostream>;
using namespace std;
void sort(string &message)
{
    for(int i=0;i<message.length();i++)
    {
        for(int j=i+1;j<message.length();j++)
        {
            if(message[i]>message[j])
            {
                char t;
                t=message[i];
                message[i]=message[j];
                message[j]=t;
            }
        }
    }
}
int counter(string message)
{
    int count=0;
    for(int i=0;i<message.length();i++)
    {
        int j=i+1;
        if(message[i]!=message[j])count++;
    }
    return count;
}
int main()
{
    string message;
    cout<<"Enter a string: ";
    cin>>message;
    sort(message);
    cout<<counter(message)<<endl;
    // cout<<counter(message);
}