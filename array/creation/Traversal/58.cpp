#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> nums = {1,1,2,2,3,4,4};
    int j = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }
    int k = j + 1;
    cout << "Unique Elements: ";
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
    cout << "\nCount = " << k;
    return 0;
}
