#include<iostream>
using namespace std;

int main(){
    int prices[] = {7,1,5,3,6,4};
    int size = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < size; i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if(profit > maxProfit){
            maxProfit = profit;
        }
    }

    cout << "Maximum Profit = " << maxProfit;

    return 0;
}
