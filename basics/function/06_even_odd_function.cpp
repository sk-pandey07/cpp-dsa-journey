#include<iostream>
using namespace std;
int isEvenodd(int n){
    if(n % 2 == 0){
        cout << n << " is even";
    } 
    else{
        cout << n << " is odd";
    }
}
int main(){
    int n;
    cout << "enter number:";
    cin >> n;
    isEvenodd(n);
    return 0;
}
