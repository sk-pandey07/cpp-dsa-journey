#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 7, 1, 9, 2};
    int n = 5;
    cout << "Reverse of array = ";
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
