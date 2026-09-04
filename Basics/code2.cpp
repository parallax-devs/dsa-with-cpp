#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 2;
    int count = 0;
    do{
        if (n%i == 0){
            count++;}
        i++;
    }
        while(i<n);
    if (count ==0){
        cout << "prime"<< " ";
    }else{
        cout <<"not prime" << " ";
    }
    return 0;
}
