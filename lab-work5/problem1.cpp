#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float t,v;
  cout<<"Enter the temperature in Fahrenheit between -58F and 41F: ";
  cin>>t;
  cout<<"Enter the wind speed (>=2) in miles per hour: ";
  cin>>v;
    if(t<=41 && t>=-58 && v>=2)
    {
      cout<<"The wind chill index is"<<35.74+0.6215*t-35.75*pow(v,0.16)+0.4275*t*pow(v,0.16);
    }else
    {
      cout<<"Please enter correct temperature and wind speed ";
    }
    return 0;
}
