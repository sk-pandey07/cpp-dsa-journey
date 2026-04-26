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

    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }

    double average = double(sum) / size;

    cout << "average of array: " << average;
    return 0;
}
