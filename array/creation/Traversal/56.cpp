#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 7, 1, 9, 2};
    int n = 5;

    int smallest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "smallest element = " << smallest;
    return 0;
}
