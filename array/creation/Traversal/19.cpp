// Difference (even index sum - odd index sum)
#include<iostream>
using namespace std;
int main(){
    int num[] = {2,1,4,5,33,6,3,13};
    int size = 8;

    int even_sum = 0;
    int odd_sum = 0;

    for(int i=0; i<size; i++){
        if(num[i] % 2 == 0){
            even_sum += num[i];
        }

        if(num[i] % 2 != 0){
            odd_sum += num[i];
        }
    }
    cout << "even sum = " << even_sum << endl;
    cout << "odd sum = " << odd_sum << endl;

    int diffrence = even_sum - odd_sum;

    cout << "diffrence = " << diffrence;
    return 0;
}
