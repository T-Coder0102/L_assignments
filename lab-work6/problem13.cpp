#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int keyRand()
{
    int min =10;
    int max = 100;
    int random_number = min+(rand()%(max-min+1));
    return random_number;
}
void encoder(char c)
{
    const int key = keyRand();
    int result= char(c)-(3*key*key)/10;
    cout<<result<<endl;
}
int main()

{
    char c;
    for(int i=0; i<8;i++)
    {
        cin>>c;
        encoder(c);
    }
    cout<<"The KEY is: "<<keyRand();
}