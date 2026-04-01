// Reverse a binary number
#include<iostream>
using namespace std;
int reversebinary(int n){
    int rev = 0;
    while(n > 0){
        int rem = n % 2;
        rev = rev * 2 + rem;
        n = n / 2;
    }
    return rev;
}
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;

    cout << "Reversed binary (in decimal form) = " << reversebinary(n);
    return 0;
}
