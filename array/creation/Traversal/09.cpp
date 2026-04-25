// Sum of even indexed elements
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;

    int sum = 0;
    for(int i=0; i<size; i++){
        if(i % 2 == 0){
            sum = sum + arr[i];
        }
    }
    cout << "sum of even index numbers = " << sum;
    return 0;
}
