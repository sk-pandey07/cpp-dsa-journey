// Print elements at even index
#include<iostream>
using namespace std;
int main(){
    int num[] = {2,1,4,5,33,6,3,13};
    int size = 8;

    for(int i=0; i<size; i++){
        if(i % 2 == 0){
            cout << num[i] << " ";
        }
    }
    return 0;
}
