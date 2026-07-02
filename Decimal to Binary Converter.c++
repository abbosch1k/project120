#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    string binary = "";

    cin >> n;

    while(n > 0) {
        binary = char(n % 2 + '0') + binary;
        n /= 2;
    }

    cout << binary;

    return 0;
}
