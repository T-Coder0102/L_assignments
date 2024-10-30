#include <iostream>;
using namespace std;
void solveEquation(double a, double b, double c,
 double d, double e, double f, double&x, double& y,bool& isSolvable)
{
    if((a*d-b*c)!=0)
    {
        x = (e*d-b*f)/(a*d-b*c);
        y = (a*f-e*c)/(a*d-b*c);
        isSolvable=true;
        cout<<x<<" "<<y<<endl;
        cout<<"The equation is solvable(true or false): "<<bool(isSolvable)<<endl;
    }else
    {
        cout<<"No solution";
    }
};
int main()
{
    double a, b, c, d, e, f;
    bool isSolvable=false;
    double x=0, y=0;
    cout<<"Enter 6 numbers: ";
    cin>>a>>b>>c>>d>>e>>f;
    solveEquation(a,b,c,d,e,f,x,y,isSolvable);

}