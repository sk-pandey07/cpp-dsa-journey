#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(numbers[i] + numbers[j] == target) {
                    return {i + 1, j + 1};
                }
            }
        }

        return {};
    }
};

int main() {
    Solution sol;

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(numbers, target);

    cout << "Indices: ";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}
