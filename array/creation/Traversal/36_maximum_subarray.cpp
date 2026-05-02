// LeetCode 53 (Maximum Subarray)
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 9;

    int sum = 0;
    int maxsum = INT_MIN;

    for(int i=0; i<size; i++){
        sum += nums[i];

        if(sum > maxsum){
            maxsum = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    cout << "Maximum subarray sum = " << maxsum;
    return 0;
}
