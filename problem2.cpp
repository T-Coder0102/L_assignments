#include <iostream>;
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>=0) {
        if(n%2==0) {
            cout<<"The number is positive and even"<<endl;
        }else {
            cout<<"The number is positive and odd"<<endl;
        }
    }else {
        if(n%2==0) {
            cout<<"The number is negative and even"<<endl;
        }else {
            cout<<"The number is negative and odd"<<endl;
        }
    }
}