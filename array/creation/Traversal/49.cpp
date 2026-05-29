#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 25, 8, 40, 15};
    int n = 5;

    int largest = arr[0];
    int second_largest = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }
    
    cout << "Second largest =" << second_largest;
    return 0;
}
