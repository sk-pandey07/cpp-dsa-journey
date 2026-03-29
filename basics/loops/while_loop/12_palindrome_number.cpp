#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;
    int original = n;
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(original == rev){
        cout << original << " is palindrome";
    }
    else{
        cout << original << " isn't palindrome";
    }
    return 0;
}
