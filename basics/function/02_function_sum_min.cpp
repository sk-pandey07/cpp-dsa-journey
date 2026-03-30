#include<iostream>
using namespace std;
int sum(int a,int b){
    int s = a + b;
    return s;
}

int minoftwo(int a,int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout << "sum is: " << sum(10,5) << endl;
    cout << "minimum is " << minoftwo(10,9) << endl;

    return 0;
}
