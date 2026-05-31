#include<iostream>
using namespace std;
int main(){
    int arr[] = {-5, 10, -2, 7, -1, 4};
    int n = 6;

    int positive = 0;
    int negative = 0;

    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            positive++;
        }
        else{
            negative++;
        }
    }
    cout << "Positive number = " << positive << endl;
    cout << "Negative number = " << negative;
    return 0;
}
