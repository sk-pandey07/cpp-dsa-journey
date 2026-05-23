#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> nums = {1,2,1};

    vector<int> ans;

    // first copy
    for(int i = 0; i < nums.size(); i++){
        ans.push_back(nums[i]);
    }

    // second copy
    for(int i = 0; i < nums.size(); i++){
        ans.push_back(nums[i]);
    }

    cout << "Concatenated Array: ";

    for(int num : ans){
        cout << num << " ";
    }

    return 0;
}
