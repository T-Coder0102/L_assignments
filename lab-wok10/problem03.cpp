#include <iostream>

// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
//     if (n == 1) {
//         std::cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << std::endl;
//         return;
//     }
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
//     std::cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << std::endl;
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }
//
// int main() {
//     int n = 3; // Number of disks
//     towerOfHanoi(n, 'A', 'C', 'B');
//     return 0;
// }
#include <iostream>;
#include <cmath>;
using namespace std;
double power(int n)
{
    if(n==0)
    {
        return 0;
    }
    double result = pow(2, n-1);
    return 1/result+power(n-1);
}
int main()
{
    int n=2;
    cout<<power(n)<<endl;
}