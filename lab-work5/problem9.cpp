#include <iostream>;
using namespace std;
int main()
{
    int N, g, passedS=0,max=0;
    float sum=0;
    cout<<"Enter the number of students: ";
    cin>>N;
    if(N>=1 && N<=100)
    {
        for(int i=1;i<=N;i++)
        {
            cout<<"Enter the grade of student "<< i<<":";
            cin>>g;
            if(g>=0 && g<=100)
            {
                if(max<g)
                {
                    max=g;
                }
                if(g>=60)passedS++;
                sum+=g;
            }else
            {
                cout<<"Invalid input"<<endl;
            }
        }
    }else
    {
        cout<<"Invalid input"<<endl;
    }
    cout<<"The Average grade is "<<sum/N<<endl;
    cout<<"The Maximum grade is "<<max<<endl;
    cout<<"Passed students: "<<passedS<<endl;

}