#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            actualSum += nums[i];
        }

        return expectedSum - actualSum;
    }
};

int main() {
    vector<int> nums = {3, 0, 1};

    Solution obj;
    cout << "Missing Number: " << obj.missingNumber(nums) << endl;

    return 0;
}
