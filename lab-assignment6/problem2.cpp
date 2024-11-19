#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "m= ";
    cin >> m;
    cout << "n=";
    cin >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    double averageR[100];
    for (int i = 0; i < m; i++) {
        double sumR = 0;
        for (int j = 0; j < n; j++) {
            sumR += arr[i][j];
        }
        averageR[i] =sumR / n;
    }
    double averageC[100];
    for (int j = 0; j < n; j++) {
        double sumC = 0;
        for (int i = 0; i < m; i++) {
            sumC += arr[i][j];
        }
        averageC[j] = sumC / m;
    }
    bool isAverageCommon = true;
    double averageCommon = averageR[0];

    for (int i = 1; i < m; i++) {
        if (averageR[i] != averageCommon) {
            isAverageCommon = false;
            break;
        }
    }
    if (isAverageCommon) {
        for (int j = 0; j < n; j++) {
            if (averageC[j] != averageCommon) {
                isAverageCommon = false;
                break;
            }
        }
    }
    if (isAverageCommon) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}