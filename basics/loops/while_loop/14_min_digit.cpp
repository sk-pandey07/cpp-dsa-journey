#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;
    int mindigit = 9;
    while(n != 0){
        int digit = n % 10;
        if(digit < mindigit){
            mindigit = digit;
        }
        n = n / 10;
    }
    cout << "mindigit is: " << mindigit;
    return 0;
}
