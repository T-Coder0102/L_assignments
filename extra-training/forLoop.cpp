#include <iostream>
using namespace std;
int main()
{
//  Problem11 from C++ book
//  int n,sum=0;
//  cout<<"Enter an integer: ";
//  cin>>n;
//  for(int i=0;i<=n*2;i++){
//    sum+=(n+i)*(n+i);
//  }cout<<sum<<endl;

//  Problem12
//    int n;
//    float a=1.1,product=1;
//    cout<<"Enter a number: ";
//    cin>>n;
//    for(int i=1;i<=n;i++){
//      product*=a;
//      a+=0.1;
//    }cout<<product;

//Problem14
//int n,sum=0;
//cout<<"Enter a number: ";
//cin>>n;
//for(int i=1;i<=n;i++){
//  for(int j=1;j<=2*i-1;j+=2){
//    sum+=j;
//  }cout<<sum<<endl;
//  sum=0;
//}

//Problem15
//int a,n,product=1;
//cout<<"Enter a number: ";
//cin>>a;
//cout<<"Enter the power: ";
//cin>>n;
//for(int i=1;i<=n;i++){
//  product*=a;
//}cout<<product;

//Problem16
//int a,n,p=1;
//cout<<"Enter the number: ";
//cin>>a;
//cout<<"Enter the power: ";
//cin>>n;
//for(int i=1;i<=n;i++){
//  for(int j=1;j<=i;j++){
//    p*=a;
//  }cout<<p<<" ";
//  p=1;
//}

//Problem17
int a,n,p=1,sum=0;
cout<<"Enter a number: ";
cin>>a;
cout<<"Enter power of the number: ";
cin>>n;
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    p*=a;
  }sum+=p;
  p=1;
}cout<<sum;
    return 0;
}
