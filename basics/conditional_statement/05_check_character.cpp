#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter character:";
    cin >> ch;

    if((ch >= 'a') && (ch <= 'z')){
        cout << "lowercase";
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << "upercase";
    }
    else{
        cout << "invalid character";
    }
    return 0;
}
