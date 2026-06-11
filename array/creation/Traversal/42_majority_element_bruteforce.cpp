// leetcode - 169 , majority element  using brute force - o(n^2) 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int n = nums.size();

    for(int i=0; i<n; i++){
        int freq = 0;
        for(int j=0; j<n; j++){
            if(nums[i] == nums[j]){
                freq++;
            }
        }
        if(freq > n/2){
            cout << "majority element is : " << nums[i];
            return 0;
        }
    }
    return 0;
}
