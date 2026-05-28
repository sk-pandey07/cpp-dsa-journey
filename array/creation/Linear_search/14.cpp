#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){

    vector<int> nums = {1,1,1};

    int k = 2;

    unordered_map<int, int> mp;

    // base case
    mp[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for(int i = 0; i < nums.size(); i++){

        prefixSum += nums[i];

        // required sum exists
        if(mp.find(prefixSum - k) != mp.end()){

            count += mp[prefixSum - k];
        }

        // store prefix sum
        mp[prefixSum]++;
    }
    cout << "Total Subarrays = "
         << count;
    return 0;
}
