#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;

    int binary = 0, place = 1;
    while(n > 0){
        int rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }
    cout << "binary= " << binary;
    return 0;
}
