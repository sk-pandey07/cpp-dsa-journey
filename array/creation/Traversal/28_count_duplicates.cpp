#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,2,4,1};
    int size = 6;

    int count = 0;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }

    cout << count;
}
