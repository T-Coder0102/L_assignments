#include <iostream>;
#include <math.h>
using namespace std;
int main() {
    float a,b;
    cin>>a>>b;
    double radius;
    radius=sqrt(a*a+b*b);
    if(radius<10) {
        cout<<"("<<a<<","<<b<<")"<<" is in circle"<<endl;
    }else {
        cout<<"("<<a<<","<<b<<")"<<" is not in circle"<<endl;
    }
}