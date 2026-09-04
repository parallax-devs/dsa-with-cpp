#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int arr[6] = {3,-5, 7, -8, 5 , 6};
    int maxSum = INT_MIN;
    int currSum =0;
    for(int i=0; i<6; i++){
        currSum+= arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}