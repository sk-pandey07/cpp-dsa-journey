// Replace negative number with 0
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, -5, 7, -1, 3};
    int size = 5;

    for(int i=0; i<size; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }

    cout << "updated array = ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
