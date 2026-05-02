// LeetCode 169 - Majority Element
#include<iostream>
using namespace std;
int main(){
    int nums[] = {2,2,1,1,1,2,2};
    int size = 7;

    int count = 0;
    int candidate = 0;

    for(int i=0; i<size; i++){
        if(count == 0){
            candidate = nums[i];
        }

        if(nums[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }
    cout << "majority element = " << candidate;
    return 0;
}
