#include <iostream>
using namespace std;

int main() {

    int binary, decimal = 0, base = 1;

    cin >> binary;

    while(binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }

    cout << decimal;

    return 0;
}
