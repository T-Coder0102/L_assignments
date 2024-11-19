#include <iostream>;
using namespace std;
const int N=4;
void multiplyMatrix(const double a[][N],const double b[][N],double c[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
           for(int k=0;k<N;k++)
           {
               c[i][j]+=a[i][k]*b[k][j];
           }
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<c[i][j]<<" ";
        }cout<<endl;
    }
};
int main()
{
    double a[N][N];
    double b[N][N];
    double c[N][N];
    cout<<"Enter matrix A:"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter matrix B:"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>b[i][j];
        }
    }
    multiplyMatrix(a,b,c);
}