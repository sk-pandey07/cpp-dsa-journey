#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    int n = nums.size();
    vector<int> ans;

    for(int i = 1; i <= n; i++){
        bool found = false;
        for(int j = 0; j < n; j++){
            if(nums[j] == i){
                found = true;
                break;
            }
        }
        if(!found){
            ans.push_back(i);
        }
    }
    cout << "Missing numbers: ";
    for(int num : ans){
        cout << num << " ";
    }
    return 0;
}
