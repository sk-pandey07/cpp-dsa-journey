#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,1};
    int n = nums.size();
    vector<int> ans(2 * n);
    for(int i = 0; i < n; i++){
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    cout << "Concatenated Array: ";
    for(int num : ans){
        cout << num << " ";
    }
    return 0;
}
