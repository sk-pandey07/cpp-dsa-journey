#include<iostream>
#include<vector>
using namespace std;
int main(){
    // brute force aproch
    vector<int> nums = {3,5};
    int n = nums.size();
    for(int x=0; x<=n; x++){
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] >= x){
                count++;
            }
        }
        if(count == x){
            cout << "special x = " << x;
            return 0;
        }
    }
    
    cout << -1;
    return 0;
}
