// Count numbers greater than X
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,25,5,30,15};
    int size = 5;

    int x = 15;
    int count = 0;

    for(int i=0; i<size; i++){
        if(arr[i] > x){
            count++;
        }
    }
    cout << "count number greater than 15 = " << count;
    return 0;
}
