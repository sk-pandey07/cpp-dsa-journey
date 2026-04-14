#include <iostream>
using namespace std;

int main() {
    int n = 10, i = 2;

    int bit = (n >> i) & 1;

    cout << "Bit at position " << i << " = " << bit;

    return 0;
}
