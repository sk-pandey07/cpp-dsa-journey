#include<iostream>
#include<string>
using namespace std;
string onesComplement(string bin){
    for(int i = 0; i < bin.length(); i++){
        if(bin[i] == '0')
            bin[i] = '1';
        else
            bin[i] = '0';
    }
    return bin;
}
int main(){
    string bin;
    cout << "Enter binary number: ";
    cin >> bin;

    cout << "1's Complement = " << onesComplement(bin);
    return 0;
}
