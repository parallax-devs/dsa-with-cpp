#include <iostream>
using namespace std;

int isPowerofTwo(int n) {
    return (n>0) && ((n & (n-1))==0);

}

int main() {
    int n=16;
    if(isPowerofTwo(n)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}