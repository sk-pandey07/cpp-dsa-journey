// LeetCode 283 Move Zeroes
#include<iostream>
using namespace std;
int main(){
    int nums[] = {0,1,0,3,12};
    int size = 5;

    int j = 0;
    for(int i=0; i<size; i++){
        if(nums[i] != 0){
            int n = nums[i];
            nums[i] = nums[j];
            nums[j] = n;
            j++;
        }
    }

    cout << "after move zeros : ";
    for(int i=0; i<size; i++){
        cout << nums[i] << " ";
    }
    return 0;
}
