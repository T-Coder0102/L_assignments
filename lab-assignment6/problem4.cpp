#include <iostream>;
#include <vector>
using namespace std;
int main()
{
    int n,a,count=0;
    cout<<"n=";
    cin>>n;
    vector<int> v;
    while(cin>>a)
    {
        v.push_back(a);
    }
    for(int i=1;i<v.size();i++)
    {
        if(v[i]!=1 && v[i-1]==0 && v[i+1]==0)
        {
            count++;
        }
    }
    if(n==count)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }


}