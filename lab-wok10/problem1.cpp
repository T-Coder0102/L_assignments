#include <iostream>
using namespace std;
template<typename myDataType>
myDataType max_value(myDataType a, myDataType b, myDataType c){
  if(a>b && a>c){
    return a;
  }else if(b>a && b>c){
    return b;
  }else{
    return c;
  }
}
int main()
{
  cout<<max_value('A','b','C')<<endl;
}
