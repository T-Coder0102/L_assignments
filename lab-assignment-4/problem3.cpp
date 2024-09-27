#include <iostream>;
using namespace std;
int main()
{
    int N,A,B,temp=0,tempSum=0,sum=0,t=0;
    cout<<"Enter three numbers: ";
    cin>>N>>A>>B;
    for(int i=1;i<=N;i++)
    {
        t=i;
       if(t<=B && t>=A && t<10)
       {
           sum+=t;
       }else
       {
           while(t>0)
           {
               temp=t%10;
               t/=10;
               tempSum+=temp;

           }if(tempSum>=A && tempSum<=B)
           {
               sum+=i;
               tempSum=0;
           }else{tempSum=0;}
       }
    }cout<<sum<<endl;
}