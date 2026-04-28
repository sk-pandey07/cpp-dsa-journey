// Multiply each element by 2
#include<iostream>
using namespace std;
int main(){
    int num[] = {2,1,4,5,33,6,3,13};
    int size = 8;

    for(int i=0; i<size; i++){
        num[i] = num[i] * 2;
    }

    cout << "updated array = ";
    for(int i=0; i<size; i++){
        cout << num[i] << " ";
    }
    return 0;
}
