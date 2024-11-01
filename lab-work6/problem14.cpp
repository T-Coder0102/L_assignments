#include <iostream>;
using namespace std;
char decoder(int key, int encryption)
{
    char c = encryption+3*key*key/10;
    return c;
}
int main()
{
    int key, encryption;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<"Enter the encryption: ";
    for(int i=1;i<=8;i++)
    {
        cin>>encryption;
        cout<<decoder(key,encryption);
    }
    return 0;
}