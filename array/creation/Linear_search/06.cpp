#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcd";
    string t = "abcde";
    int freq[26] = {0};
    for(char ch : s){
        freq[ch - 'a']++;
    }
    for(char ch : t){
        freq[ch - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] < 0){
            cout << "Extra character = "
                 << char(i + 'a');
            break;
        }
    }
    return 0;
}
