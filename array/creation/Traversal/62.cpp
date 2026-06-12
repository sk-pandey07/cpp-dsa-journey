#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int currSum = 0;
    int maxSum = nums[0];
    for(int i = 0; i < nums.size(); i++){
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "Maximum Subarray Sum = "
         << maxSum;
    return 0;
}
