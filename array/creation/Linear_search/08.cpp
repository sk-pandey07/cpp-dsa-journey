#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,2,3};
    bool increasing = true;
    bool decreasing = true;
    for(int i = 0; i < nums.size() - 1; i++){

        if(nums[i] > nums[i + 1]){
            increasing = false;
        }
    }
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] < nums[i + 1]){
            decreasing = false;
        }
    }

    if(increasing || decreasing){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}
