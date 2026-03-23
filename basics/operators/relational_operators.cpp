#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter a:";
    cin >> a;
    
    int b;
    cout << "enter b:";
    cin >> b;

    cout << "equal : " << (a == b) << endl;
    cout << "not equal: " << (a != b) << endl;
    cout << "greater than: " << (a > b) << endl;
    cout << "less than: " << (a < b) << endl;
    cout << "greater than or equal: " << (a <= b) << endl;
    cout << "less than equal: " << (a >= b) << endl;

    return 0;
}
