#include <iostream>
using namespace std;

// Program to print hollow diamond pattern
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Top part
    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // First star
        cout << "*";

        // Hollow space
        if(i != 0) {
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    // Bottom part
    for(int i = n - 2; i >= 0; i--) {

        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // First star
        cout << "*";

        // Hollow space
        if(i != 0) {
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
