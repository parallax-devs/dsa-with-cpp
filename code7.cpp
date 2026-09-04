#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cout << "Enter elements to be entered" << endl;
    cin >> n;
    for(int i=1; i<=n ;i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    
    }
    for(int j=0; j<nums.size(); j++){
        int count=1;
        for(int k=0; k<nums.size(); k++){
            if(j!=k){
                if(nums[j]==nums[k]){
                    count++;
                }
            }
        }
    if (count==1) {
        cout << "Unique Element: " << nums[j] << endl;
    }
        
    }
}