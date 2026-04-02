#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
    if(n <= 0) return false;

    while(n % 2 == 0){
        n = n / 2;
    }
    return (n == 1);
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(isPowerOfTwo(n))
        cout << "Yes, Power of 2";
    else
        cout << "Not a Power of 2";
    return 0;
}
