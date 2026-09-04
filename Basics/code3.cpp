#include <iostream>
using namespace std;

int main() {
    int n=4;
    int num=1;
    for(int i=n; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}