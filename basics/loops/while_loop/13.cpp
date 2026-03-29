#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;
    int maxdigit = 0;
    while(n != 0){
        int digit = n % 10;
        if(digit > maxdigit){
            maxdigit = digit;
        }
        n = n / 10;
    }
    cout << "maxdigit is: " << maxdigit;
    return 0;
}
