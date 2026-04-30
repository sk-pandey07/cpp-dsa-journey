#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,2,4,1};
    int size = 6;

    for(int i=0; i<size; i++){
        bool isDuplicate = false;

        for(int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate){
            cout << arr[i] << " ";
        }
    }
}
