#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;

    int fact = 1;

    int i = 1;
    while(i <= n){
        fact *= i;
        i++;
    }
    cout << n << " factorial is: " << fact;

    return 0;
}
