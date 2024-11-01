#include <iostream>;
#include <cstdlib>
using namespace std;

int encoder(char c, int random)
{
    int result = char(c)-3*random*random/10;
    return result;
}
int main()
{
    int random =10 + (rand() % 91);
    char c;
    cout<<"Enter the characters: ";
    for (int i=0;i<8;i++)
    {
        cin>>c;
        cout<<encoder(c,random);
    }
    cout<<endl;
    cout<<"KEY:"<<random<<"\n";
    return 0;
}