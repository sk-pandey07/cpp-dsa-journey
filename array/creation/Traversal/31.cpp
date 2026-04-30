#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,2,4};
    int size = 6;

    int maxFreq = 0, element;

    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxFreq){
            maxFreq = count;
            element = arr[i];
        }
    }

    cout << element;
}
