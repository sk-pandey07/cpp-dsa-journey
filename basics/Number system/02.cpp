#include<iostream>
using namespace std;
int binarytodecimal(int binary_n){
    int ans=0, pow=1;
    while(binary_n > 0){
        int rem = binary_n % 10;
        ans = ans + rem * pow;

        binary_n = binary_n / 10;
        pow = pow * 2;
    }
    return ans;
}
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;

    cout << "binary to decimal = " << binarytodecimal(n);
    return 0;
}
