#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;

    if(n <= 1){
        cout << n << " isn't prime";
    }

    bool isprime = true;

    for(int i=2; i<n; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }

    if(isprime){
        cout << n << " is prime";
    }
    else{
        cout << n << " isn't prime";
    }

    return 0;
}
