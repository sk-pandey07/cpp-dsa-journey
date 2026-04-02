#include<iostream>
using namespace std;
int addBinary(int a, int b){
    int result = 0, carry = 0, place = 1;
    while(a > 0 || b > 0 || carry > 0){
        int bit1 = a % 10;
        int bit2 = b % 10;
        int sum = bit1 + bit2 + carry;

        int digit = sum % 2;   
        carry = sum / 2;       

        result = result + digit * place;
        place = place * 10;
        a = a / 10;
        b = b / 10;
    }
    return result;
}
int main(){
    int a, b;
    cout << "Enter two binary numbers: ";
    cin >> a >> b;
    cout << "Sum = " << addBinary(a, b);
    return 0;
}
