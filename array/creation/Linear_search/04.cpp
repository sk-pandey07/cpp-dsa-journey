#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {3,6,1,0};
    int n = arr.size();
    int maxindex = 0;
    for(int i=0; i<n; i++){
        if(arr[i] << arr[maxindex]){
            maxindex = i;
        }
    }

    bool valid = true;
    for(int i=0; i<n; i++){
        if(i != maxindex && arr[maxindex] < 2* arr[i]){
            valid = false;
            break;
        }
    }

    if(valid){
        cout << "index = " << maxindex;
    }
    else{
        cout << -1;
    }
    return 0;
}
