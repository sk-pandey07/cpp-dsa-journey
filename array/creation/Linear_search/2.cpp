#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {10,2,5,3};
    int n = nums.size();

    bool found = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i != 0 & nums[i] == 2 * nums[j]){
                found = true;
                break;
            }
        }
    }
    if(found){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}
