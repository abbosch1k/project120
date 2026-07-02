#include <iostream>
using namespace std;

int main() {

    string user, pass;

    cin >> user >> pass;

    if(user == "admin" && pass == "1234")
        cout << "Welcome";
    else
        cout << "Access Denied";

    return 0;
}
