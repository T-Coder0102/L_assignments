#include <iostream>;
using namespace std;
int main()
{
    bool winter, rain;
    cin>>winter>>rain;
    if (winter)
    {
        cout<<"Bus"<<endl;
    }else
    {
        if(rain)
        {
            cout<<"Walk"<<endl;
        }else
        {
            cout<<"Bike"<<endl;
        }
    }
}