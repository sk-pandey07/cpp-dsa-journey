#include<iostream>
using namespace std;
int decimaltobinary(int n){
    int binary=0, place=1;
    while(n > 0){
        int digit = n % 2;
        binary = binary + digit * place;
        place = place * 10;
        n = n / 2;
    }
    return binary;
}
int main(){
    int n;
    cout << "enter number:";
    cin >> n;

    cout << "binary: " << decimaltobinary(n);
    return 0;
}
