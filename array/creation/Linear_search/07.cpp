#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> flowerbed = {1,0,0,0,1};

    int n = 1;

    int count = 0;

    for(int i = 0; i < flowerbed.size(); i++){

        if(flowerbed[i] == 0){

            bool leftEmpty =
                (i == 0 || flowerbed[i - 1] == 0);

            bool rightEmpty =
                (i == flowerbed.size() - 1 ||
                 flowerbed[i + 1] == 0);

            if(leftEmpty && rightEmpty){

                flowerbed[i] = 1;
                count++;
            }
        }
    }
    if(count >= n){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}
