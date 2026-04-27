#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    int total = 0;
    for(int i=0; i<size; i++){
        total += arr[i];
    }
    cout << "total sum = " << total;
    return 0;
}
