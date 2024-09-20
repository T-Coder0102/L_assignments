#include <iostream>;
using namespace std;
int main()
{
    int m;
    cin>>m;
    switch (m){
    case 1:
        cout<<"In January there is:\n";
        cout<<"- Defender of the Fatherland Day, 14 January";
        break;
    case 3:
        cout<<"In March there is: \n";
        cout<<"- International Women's Day, 8 March \n";
        cout<<"- Navruz, 21 March";
        break;
    case 5:
        cout<<"In May there is :\n"<<"-Remembrance and Appreciation Day, 9 May";
        break;
    case 9:
        cout<<"In September there is:\n"<<"-Independence Day, 1 September";
        break;
    case 10:
        cout<<"In October there is: \n"<<"-Teacher's Day, 1 October\n"<<"-Uzbek Language Day";
    case 12:
        cout<<"In December there is: \n"<<"-Karakalpak Language Day, 1 December\n"<<"New Year, 31 December";
        default:
            cout<<"In February, April, June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
    }
}