// Count number of 1s in binary (Hamming weight)
#include<iostream>
using namespace std;
int countones(int n){
    int count = 0;
    while(n > 0){
        if(n % 2 == 1){
            count++;
        }
        n = n / 2;
    }
    return count;
}
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;

    cout << "count one's= " << countones(n);
    return 0;
}
