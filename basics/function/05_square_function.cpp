#include<iostream>
using namespace std;
int squareN(int n){
    int sqr = n * n;
    return sqr;
}
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << n << " square is : " << squareN(n) << endl;
    return 0;
}
