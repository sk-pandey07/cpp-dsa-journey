#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums = {2, 2, 3, 1};

    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

    for (int num : nums) {
        if (num == first || num == second || num == third)
            continue;

        if (num > first) {
            third = second;
            second = first;
            first = num;
        }
        else if (num > second) {
            third = second;
            second = num;
        }
        else if (num > third) {
            third = num;
        }
    }
    if (third == LONG_MIN)
        cout << "Answer: " << first << endl;
    else
        cout << "Answer: " << third << endl;

    return 0;
}
