#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {0,3,2,1};
    int n = nums.size();
    int i = 0;
    while(i+1 < n && nums[i] < nums[i+1]){
        i++;
    }

    if(i == 0 || i == n-1){
        cout << "false";
        return 0;
    }

    while(i+1 < n && nums[i] > nums[i+1]){
        i++;
    }

    if(i == n-1){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}
