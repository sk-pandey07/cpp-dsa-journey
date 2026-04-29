// LeetCode 1365 How Many Numbers Are Smaller Than the Current Number
#include<iostream>
using namespace std;
int main(){
    int nums[] = {8,1,2,2,3};
    int size = 5;

    int ans[size];
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(nums[j] < nums[i]){
                count++;
            }
        }
        ans[i] = count;
    }

    cout << "Result = ";
    for(int i=0; i<size; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
