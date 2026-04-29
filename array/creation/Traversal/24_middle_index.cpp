// LeetCode 1991 Find the Middle Index in Array
#include<iostream>
using namespace std;
int main(){
    int nums[] = {2,3,-1,8,4};
    int size = 5;

    int total = 0;
    for(int  i=0; i<size; i++){
        total += nums[i];
    }

    int leftsum = 0;
    int index = -1;
    for(int i=0; i<size; i++){
        int rightsum = total - leftsum - nums[i];

        if(leftsum == rightsum){
            index = i;
            break;
        }
        leftsum += nums[i];
    }
    cout << "middle index = " << index;
    return 0;
}
