// LeetCode 1920 Build Array from Permutation
#include<iostream>
using namespace std;
int main(){
    int num[] = {0, 2, 1, 5, 3, 4};
    int size = 6;

    int ans[size];
    for(int i=0; i<size; i++){
        ans[i] = num[num[i]];
    }

    cout << "final result = ";
    for(int i=0; i<size; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
