#include <iostream>;
using namespace std;
int main() {
    char car;
    cin>>car;
    if(car>=65 && car<=90) {
        cout<<"Uppercase alphabet";
    }else if(car>=97 && car<=122) {
        cout<<"Lowercase alphabet";
    }else {
        cout<<"It is not an alphabet";
    }

}