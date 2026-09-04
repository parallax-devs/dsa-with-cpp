#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,2,2,2,2,2,2,2,2,2,2,2,3,2,3,3,1,1,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,3,3,3,3};
    int n=nums.size();
    int freq=0,ans=nums[0];
    for(int i=1;i<n;i++){
        if(freq==0){
            ans = nums[i];
             }
        if(nums[i]==ans){
            freq++;}
        else{
            freq--;}
        }
    return ans;
}