#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            int freq = 0;

            for(int j = 0; j < n; j++) {

                if(nums[i] == nums[j]) {
                    freq++;
                }
            }

            if(freq == 1) {
                return nums[i];
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;
    cout << obj.singleNumber(nums) << endl;

    return 0;
}
