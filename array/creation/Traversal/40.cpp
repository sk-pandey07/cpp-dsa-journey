#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,1,2};
    int size = 3;

    int j = 0;

    for(int i = 1; i < size; i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }

    int k = j + 1;

    cout << "Number of unique elements = " << k << endl;

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }

    return 0;
}
