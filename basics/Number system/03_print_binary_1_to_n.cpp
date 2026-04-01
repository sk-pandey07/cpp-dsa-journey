// Print binary of numbers from 1 to N
#include<iostream>
using namespace std;
int binary_num(int n){
    int binary = 0, place = 1;
    while(n > 0){
        int rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }
    return binary;
}
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;

    for(int i=0; i<=n; i++){
        cout << i << " binary is: " << binary_num(i) << endl;
    }
    return 0;
}
