#include <iostream>;
using namespace std;
int main()
{
    int N,grade, passedN=0,max=0;
    float sum=0;
    cout<<"Enter the number of students: ";
    cin>>N;
    if(N>=1 && N<=100)
    {
        for(int i=0;i<N;i++)
        {
            cout<<"Enter the grade: ";
            cin>>grade;

            if(grade>=0 && grade<=100)
            {

                sum+=grade;
                if(max<grade)
                {
                    max=grade;
                }if(grade>=60)
                {
                    passedN++;
                }
            }else{
                i--;
                cout<<"Re-enter"<<endl;
            }
        }
        cout<<"Total number of students: "<<passedN<<endl;
    cout<<"Average grade: "<<sum/N<<endl;
    cout<<"Max grade: "<<max<<endl;
    }else
    {
        cout<<"Invalid Input"<<endl;
    }

    return 0;
}