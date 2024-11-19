#include <iostream>
using namespace std;
const int SIZE=4;
double sumColumn(double m[][SIZE], int rowSize,
int columnIndex)
{
    double sum=0;
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<rowSize;j++)
        {
            sum+=m[j][i];
        }cout<<"Sum of column "<<columnIndex<<"= "<<sum<<endl;
            sum=0;
            columnIndex++;
    }
};
int main()
{
    int rowSize,columnIndex=0;
    cout<<"Enter row size: ";
    cin>>rowSize;
    double m[rowSize][SIZE];
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            cin>>m[i][j];
        }
    }
    sumColumn(m,rowSize,columnIndex);


    return 0;
}
