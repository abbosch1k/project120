#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    if(n >= 1 && n <= 100)
        cout << "Inside";
    else
        cout << "Outside";

    return 0;
}
