#include <iostream>
using namespace std;
int findMax(int a, int b, int c) {
    return max(a, max(b, c));
}
int main() {
    cout << "Max = " << findMax(10, 25, 15);
    return 0;
}
