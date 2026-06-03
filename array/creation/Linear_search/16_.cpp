#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {2,3,-2,4};
    int n = nums.size();

    int maxProduct = nums[0];

    // generate all subarrays
    for(int i = 0; i < n; i++){
        int product = 1;
        for(int j = i; j < n; j++){
            product *= nums[j];
            maxProduct = max(maxProduct, product);
        }
    }
    cout << "Maximum Product = "
         << maxProduct;
    return 0;
}
