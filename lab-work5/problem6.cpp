#include <iostream>;
using namespace std;
int main()
{
    int product;
    double sum=0,quantity;
    int a;
    cout<<"Enter the number of products you want to enter: ";
    cin>>a;
    while(a--)
    {
        cout<<"Please Enter product number and quantity: ";
        cin>>product>>quantity;
        switch (product)
        {
        case 1:
            sum+=quantity*2.98;
            break;
        case 2:
            sum+=quantity*4.50;
            break;
        case 3:
            sum+=quantity*9.98;
            break;
        case 4:
            sum+=quantity*4.49;
            break;
        case 5:
            sum+=quantity*6.87;
        default:
            sum=0;
        }
    }cout<<"The total retail value of all products sold: "<<sum<<endl;
}