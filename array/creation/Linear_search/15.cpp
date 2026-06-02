#include<iostream>
#include<vector>
using namespace std;
bool linearSearch(vector<int>& nums, int target){

    for(int num : nums){

        if(num == target){
            return true;
        }
    }

    return false;
}

int main(){

    vector<int> nums = {100,4,200,1,3,2};

    int longest = 0;

    for(int i = 0; i < nums.size(); i++){

        int currentNum = nums[i];
        int count = 1;

        // search next consecutive numbers
        while(linearSearch(nums, currentNum + 1)){

            currentNum++;
            count++;
        }

        longest = max(longest, count);
    }

    cout << "Longest Consecutive Length = "
         << longest;

    return 0;
}
