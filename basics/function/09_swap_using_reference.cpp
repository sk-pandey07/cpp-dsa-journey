#include<iostream>
using namespace std;
int swapN(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x,y;
    cout << "enter x: ";
    cin >> x;

    cout << "enter y: ";
    cin >> y;

    cout << "X: " << x << "y: " << y << endl;
    return 0;
}
