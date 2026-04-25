// LC 1480 → Running Sum
#include<iostream>
using namespace std;
int main(){
    int nums[] = {1,2,3,4};
    int size = 4;

    for(int i=1; i<size; i++){
        nums[i] = nums[i] + nums[i-1];
    }

    for(int i=0; i<size; i++){
        cout << nums[i] << " ";
    }
    return 0;
}
