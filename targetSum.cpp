#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int arr[4]={2,7,11,15};
    int n;
    cout << "Enter target sum: ";
    cin >> n;
    int i=0;
    int j=3;
    while(i<j){
        if(arr[i]+arr[j]==n){
            cout << "Pair : " << i << ", " << j << endl;
            i=j;}
        else if(arr[i]+arr[j]<n){
            i++;
        }
        else{
            j--;
        }
        
        }
    return 0;
}
