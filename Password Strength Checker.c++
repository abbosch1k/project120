#include <iostream>
using namespace std;

int main() {

    string password;

    cin >> password;

    if(password.length() >= 8)
        cout << "Strong";
    else
        cout << "Weak";

    return 0;
}
