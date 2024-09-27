#include <iostream>;
using namespace std;
int main()
{
    int n;
    float c,credit,total,tclass;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c>>credit;
        total+=credit*c;
        tclass+=c;
    }cout<<"Your total GPA is "<<total/tclass<<endl;
}