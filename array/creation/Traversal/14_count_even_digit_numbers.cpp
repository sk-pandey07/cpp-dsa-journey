#include<iostream>
using namespace std;
int main(){
    int num[] = {12, 345, 2, 6, 7896};
    int size = 5;

    int count = 0;
    for(int i=0; i<size; i++){
        int n = num[i];
        int digit = 0;

        if(n == 0){
            digit = 1;
        }

        while(n != 0){
            digit++;
            n /= 10;
        }

        if(digit % 2 == 0){
            count++;
        }
    }
    cout << "Even number of digit = " << count;
    return 0;
}
