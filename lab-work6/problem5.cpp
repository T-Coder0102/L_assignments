#include <iostream>
using namespace std;
void count_digit(int num)
{
    int reversed=0,counter=0,count=0;
    while(num>0)
    {
        int rem = num%10;
        reversed =reversed*10+rem;
        num/=10;
        counter++;
    }
    while(reversed!=0)
    {
        int rem = reversed%10;
        switch (rem)
        {
        case 1:
            cout<<"one ";break;
        case 2:
            cout<<"two ";break;
        case 3:
            cout<<"three ";break;
        case 4:
            cout<<"four ";break;
        case 5:
            cout<<"five ";break;
        case 6:
            cout<<"six ";break;
        case 7:
            cout<<"seven ";break;
        case 8:
            cout<<"eight ";break;
        case 9:
            cout<<"nine ";break;
        default:
            cout<<"zero ";break;
        }reversed/=10;
        count++;
    }while(counter!=count)
    {
        cout<<"zero ";
        count++;
    }
}
int main()
{
    int n;
    cout<<" Enter a number: ";
    cin>>n;
    count_digit(n);
}