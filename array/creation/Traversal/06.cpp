// pivot index , leatcode-724
#include<iostream>
using namespace std;
int main(){
    int num[] = {1,7,3,6,5,6};
    int size = 6;

    int total = 0;
    for(int i=0; i<size; i++){
        total += num[i];
    }

    int leftsum = 0;
    for(int i=0; i<size; i++){
        int rightsum = total - leftsum - num[i];
        if(leftsum == rightsum){
            cout << "pivot index = " << i;
            return 0;
        }
        leftsum += num[i];
    }
    cout << "No Pivot Index Found" << endl;
    return 0;
}
