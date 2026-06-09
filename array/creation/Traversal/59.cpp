#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 7, 1, 9, 2};
    int n = 5;

    int largest_element = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > largest_element){
            largest_element = arr[i];
        }
    }

    cout << "largest element = " << largest_element;
    return 0;
}
