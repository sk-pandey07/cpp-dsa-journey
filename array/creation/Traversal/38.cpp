#include <iostream>
using namespace std;
int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "Sum of elements = " << sum << endl;
  
    int maxElement = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element = " << maxElement << endl;

    return 0;
}
