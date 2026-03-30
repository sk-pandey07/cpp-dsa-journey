// calculate sum of numbers from 1 to n.
#include<iostream>
using namespace std;
int sumofn(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    cout << sumofn(10);
    return 0;
}
