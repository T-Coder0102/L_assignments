#include <iostream>;
#include <math.h>;
using namespace std;
void solveQuadraticEquation(double a, double b, double c)
{
    double discriminant = b * b - 4 * a * c,r1,r2;
    if(discriminant>0)
    {
        r1=((-b+sqrt(discriminant))/(2*a));
        r2=((-b-sqrt(discriminant))/(2*a));
        cout<<"Root 1 of the quadratic equation is: "<<r1<<endl;
        cout<<"Root 2 of the quadratic equation is: "<<r2;
    }else if(discriminant==0)
    {
        r1=-b/(2*a);
        cout<<"Root 1 of the quadratic equation is: "<<r1;
    }else
    {
        cout<<"The equation has no roots";
    }
};
int main()
{
    double a,b,c;
    cout<<"Enter the first number of the equation: ";
    cin>>a;
    cout<<"Enter the second number of the equation: ";
    cin>>b;
    cout<<"Enter the third number of the equation: ";
    cin>>c;
    solveQuadraticEquation(a,b,c);
}