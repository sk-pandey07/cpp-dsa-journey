#include<iostream>
using namespace std;
int main(){
    int arr[] = {89,56,45,99,32};
    int size = 5;

    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "minimum value: " << min << endl;
    cout << "maximum value: " << max << endl;
    return 0;
}
