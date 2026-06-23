#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int n = nums.size();

        if (n >= 3) {
            return nums[n - 3];
        }

        return nums[n - 1];
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 2, 3, 1};

    cout << "Third Maximum: " << obj.thirdMax(nums) << endl;

    return 0;
}
