#include <iostream>;
#include <math.h>;
using namespace std;
int main() {
    double a, b, c,d;
    cin>>a>>b>>c;
    d = sqrt((b*b-4*a*c));
    if(d<0) {
        cout<<"There is no solution";
    }
    else if(d==0) {
        cout<<"x1 ="<<(-b/2*a)<<endl;
    }else {
        cout<<"x1 ="<<((-b+d)/(2*a))<<"\n";
        cout<<"x2 ="<<((-b-d)/(2*a))<<"\n";
    }
                                   }