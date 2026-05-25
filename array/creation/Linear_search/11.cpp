class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;

        int n = nums.size();

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

        return ans;
    }
};
