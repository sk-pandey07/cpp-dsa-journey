#include<iostream>
using namespace std;
int binarytodecimal(int n){
    int ans=0, pow=1;
    while(n > 0){
        int rem = n % 10;
        ans = ans + rem * pow;
        n = n / 10;
        pow = pow * 2;
    }
    return ans;
}
int main(){
    int n;
    cout << "enter number:";
    cin >> n;

    cout << "binary is : " << binarytodecimal(n);
    return 0;
}
