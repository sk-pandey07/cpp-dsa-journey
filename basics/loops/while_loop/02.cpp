#include<iostream>
using namespace std;
int main(){
    // print total sum
    int n;
    cout << "enter number:";
    cin >> n;

    int sum = 0;

    int i = 1;
    while(i <= n){
        sum += i;
        i++;
    }

    cout << "total sum is: " << sum;

    return 0;
}
