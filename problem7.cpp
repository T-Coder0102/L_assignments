#include <iostream>;
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180) {
        cout<<"The triangle is valid";
    }else {
        cout<<"The triangle is not valid";
    }
}