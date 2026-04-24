#include<iostream>
using namespace std;
int main(){
    int arr[] = {32,23,54,12,24};
    int size = 5;

    int smallest = arr[0];

    for(int i=0; i<size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }

    }
    cout << "smallest value is: " << smallest;
    return 0;
}
