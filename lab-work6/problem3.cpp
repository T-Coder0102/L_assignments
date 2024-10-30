#include <iostream>;
#include <math.h>;
using namespace std;
void windSpeed(double v, double t)
{
    double temp=35.74+0.6215*t-35.76*pow(v,0.16)+0.4275*t*pow(v,0.16);
    cout<<"The wind chill index is: "<<temp<<endl;
}
int main()
{
    double velo, ta;
    cout<<"Enter the temperature in Fahrenheit between -58F and 41F: ";
    cin>>velo;
    cout<<"Enter the wind speed(>= 2) in miles per hour: ";
    cin>>ta;
    if(velo>=-57 && velo<=41 && ta>=2)
    {

        windSpeed(velo,ta);
    }else
    {
        cout<<"Enter appropriate numbers";
    }
}