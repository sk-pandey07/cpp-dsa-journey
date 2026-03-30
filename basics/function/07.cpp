#include<iostream>
using namespace std;
int sumofdigit(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << "sum of digit: " << sumofdigit(n);
    return 0;
}
