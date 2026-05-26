#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = {4,3,2,7,8,2,3,1};

    int n = nums.size();

    vector<int> ans;

    for(int i = 0; i < n; i++){

        int freq = 0;

        for(int j = 0; j < n; j++){

            if(nums[i] == nums[j]){
                freq++;
            }
        }

        if(freq == 2){
            bool alreadyAdded = false;
            for(int x : ans){
                if(x == nums[i]){
                    alreadyAdded = true;
                }
            }
            if(!alreadyAdded){
                ans.push_back(nums[i]);
            }
        }
    }
    cout << "Duplicates: ";
    for(int num : ans){
        cout << num << " ";
    }
    return 0;
}
