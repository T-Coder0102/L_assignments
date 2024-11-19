#include <iostream>;
#include <vector>
using namespace std;
void sortFunction(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            int a=j+1;
            if(v[j]<v[a])
            {
                int temp=v[j];
                v[j]=v[a];
                v[a]=temp;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=0)
        {
            v.pop_back();
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sortFunction(v);
}