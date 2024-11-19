#include <iostream>;
using namespace std;
void search(string& s, char& key)
{
    bool found = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == key)
        {
            found = true;
        }
    }
    if(found)
    {
        cout<<"Found"<<endl;
    }else
    {
        cout<<"Not Found"<<endl;
    }
}
int main()
{
    char key;
    cin>>key;
    string s;
    cin>>s;
    search(s,key);

}