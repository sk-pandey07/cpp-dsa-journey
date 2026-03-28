#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;

    // top
    for(int i=0; i<n; i++){
        //spaces n-i-1
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // botton
    for(int i=0; i<n-1; i++){
        cout << " ";
    }
    cout << "*";
    if(i != n-1){
                for(int j=0; j<2*(n-1)-5; j++){
        cout << " ";
    }

    cout << "*";
    }
    cout << endl;

    return 0;
}
