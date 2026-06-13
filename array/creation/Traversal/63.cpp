#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> digits = {1,2,3};

    int n = digits.size();

    for(int i = n - 1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i]++;
            for(int digit : digits){
                cout << digit << " ";
            }
            return 0;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    for(int digit : digits){
        cout << digit << " ";
    }
    return 0;
}
