#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 7, 1, 9, 2};
    float n = 5;
    float sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    float average = sum/n;
    cout << "average of array = " << average;
    return 0;
}
