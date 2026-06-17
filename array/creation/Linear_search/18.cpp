#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i <= n; i++) {

            bool found = false;

            for(int j = 0; j < n; j++) {

                if(nums[j] == i) {
                    found = true;
                    break;
                }
            }

            if(!found) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {3, 0, 1};

    Solution obj;
    cout << obj.missingNumber(nums) << endl;

    return 0;
}
