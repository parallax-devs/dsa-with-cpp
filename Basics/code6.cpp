#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    for (int i=0; i<size/2; i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    cout << "Reversed array: ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}