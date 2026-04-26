#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "enter array size: ";
    cin >> size;

    int arr[size];
    cout << "enter array element: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    cout << "total odd number in array = " << count;
    return 0;
}
