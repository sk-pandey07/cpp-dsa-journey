// Difference of sum (even - odd)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    int evensum = 0;
    int oddsum = 0;

    for(int i=0; i<size; i++){
        if(arr[i] % 2 == 0){
            evensum += arr[i];
        }
        if(arr[i] % 2 != 0){
            oddsum += arr[i];
        }
    }

    int Difference = evensum - oddsum;

    cout << "diffrence of sum even & odd = " << Difference;

    return 0;
}
