#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,1};
    int n = nums.size();
    
    bool found = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                found = true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(found){
        cout << "true";
    }
    else{
        cout << "false";
    }
}
