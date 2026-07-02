#include <iostream>
using namespace std;

int main() {

    int seconds;

    cin >> seconds;

    while(seconds > 0) {
        cout << seconds-- << endl;
    }

    cout << "Time's Up!";

    return 0;
}
