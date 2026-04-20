#include <iostream>
using namespace std;

int main() {
    int n = 10;
    string binary = "";

    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }

    cout << "Binary = " << binary;
    return 0;
}
