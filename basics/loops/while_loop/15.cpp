#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;
    int a = 0, b = 1, i = 1;
    while(i <= n){
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}
