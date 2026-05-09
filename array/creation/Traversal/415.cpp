#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num[] = {1,2,3,4,5};
    int size = 5;

    int maxsum = 0;
    for(int st=0; st<size; st++){
        int currsum = 0;
        for(int end=st; end<size; end++){
            currsum += num[end];
            maxsum = max(currsum,maxsum);
        }
    }
    cout << "maximum subarray : " << maxsum;
    return 0;
}
