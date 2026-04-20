#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int binary = 1010;
    int decimal = 0, i = 0;
    while (binary > 0) {
        int last = binary % 10;
        decimal += last * pow(2, i);
        binary /= 10;
        i++;
    }
    cout << "Decimal = " << decimal;
    return 0;
}
