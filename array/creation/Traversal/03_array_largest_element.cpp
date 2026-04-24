#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "enter array size: ";
    cin >> size;

    int arr[size];

    cout << "enter array element: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    for(int i=0; i<size; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    cout << "largest number is : " << largest;
    return 0;
}
