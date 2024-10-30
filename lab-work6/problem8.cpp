#include <iostream>;
using namespace std;
bool areVectorsOrthogonal(double&x1,double&y1,
 double&x2,double&y2,double&x3,double&y3,
 double&x4,double&y4)
{
 bool isPerpen = false;
 double m= (x2-x1)*(x4-x3)+(y2-y1)*(y4-y3);
 if(m==0)
 {
  isPerpen=true;
 }return isPerpen;
}
int main()
{
 double x1,y1,x2,y2,x3,y3,x4,y4;
 cout<<"Enter four coordinates of points: "<<endl;
 cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
 cout<<areVectorsOrthogonal(x1,y1,x2,y2,x3,y3,x4,y4);

}