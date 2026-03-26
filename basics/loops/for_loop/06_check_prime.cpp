#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;

    if(n <= 1){
        cout << "not prime";
    }

    for(int i=2; i<n; i++){
        if(n % i == 0){
            cout << n << " isn't prime";
        }
    }
    cout << n << " is prime";

    return 0;
}
