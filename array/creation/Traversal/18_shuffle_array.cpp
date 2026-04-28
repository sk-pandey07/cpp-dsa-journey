// leetcode - 1470 (suffle array)
#include<iostream>
using namespace std;
int main(){
    int num[] = {2,5,1,3,4,7};
    int n = 3;

    int ans[6];
    int index = 0;

    for(int i=0; i<n; i++){
        ans[index++] = num[i];
        ans[index++] = num[i+n];
    }

    cout << "suffle array = ";
    for(int i=0; i<2*n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
