#include <iostream>;
using namespace std;
int decimalToBinary(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return (number%2)+10* decimalToBinary(number / 2);
};
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << decimalToBinary(number);
}