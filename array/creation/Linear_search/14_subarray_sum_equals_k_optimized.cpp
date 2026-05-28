#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> nums = {1,1,1};
    int k = 2;
    unordered_map<int, int> mp;
    mp[0] = 1;
    int prefixSum = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        prefixSum += nums[i];
        if(mp.find(prefixSum - k) != mp.end()){
            count += mp[prefixSum - k];
        }
        mp[prefixSum]++;
    }
    cout << "Total Subarrays = "
         << count;
    return 0;
}
