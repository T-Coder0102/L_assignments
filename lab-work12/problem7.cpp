#include <iostream>;
#include <vector>
using namespace std;
void vector1(vector<int>numbers, int n)
{
    int min=numbers[0],max=numbers[0];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=numbers[i];
        if(min>numbers[i])
        {
            min=numbers[i];
        }
        if(max<numbers[i])
        {
            max=numbers[i];
        }
    }
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;
    cout<<"Average: "<<sum/n<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> numbers(n);
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    vector1(numbers, n);
}