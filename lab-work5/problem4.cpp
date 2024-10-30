#include <iostream>;
using namespace std;
int main()
{
    // int a,n1=0,n2=0,n3=0,n4=0;
    // cout<<"Enter a four-digit number: ";
    // cin>>a;
    // if(a/1000>0 && a/1000<9)
    // {
    //     n4=(a%10+7)%10;
    //     a=a/10;
    //     n3=(a%10+7)%10;
    //     a=a/10;
    //     n2=(a%10+7)%10;
    //     a=a/10;
    //     n1=(a%10+7)%10;
    //     cout<<n3<<n4<<n1<<n2<<endl;
    // }else
    // {
    //     cout<<"Invalid Input";
    // }
    int a,r=0,x=1,new_num=0;
    cout<<"Enter a four digit number:";
    cin>>a;
    if(a/1000<=9 && a/1000>=1)
    {
        while(a>0)
        {
            r=((a%10)+7)%10;
            new_num+=r*x;
            x*=10;
            a/=10;
        }
        int i=new_num%100;
        int j=new_num/100;
        int mes=i*100+j;
        cout<<mes<<endl;
    }else
    {
        cout<<"Enter only a four-digit number";
        return 1;
    }
}