#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,2,4};
    int size = 6;
    int x = 2;

    int freq = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == x){
            freq++;
        }
    }

    cout << freq;
}
