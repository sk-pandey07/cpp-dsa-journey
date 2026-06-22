#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = {-4,-1,0,3,10};

    int n = nums.size();

    vector<int> ans(n);

    int left = 0;
    int right = n - 1;
    int index = n - 1;

    while(left <= right){

        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if(leftSquare > rightSquare){

            ans[index] = leftSquare;
            left++;
        }
        else{
            ans[index] = rightSquare;
            right--;
        }
        index--;
    }
    cout << "Result: ";
    for(int num : ans){
        cout << num << " ";
    }
    return 0;
}
