#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string animals[] = {
        "Cat",
        "Dog",
        "Fox",
        "Tiger"
    };

    cout << animals[rand() % 4];

    return 0;
}
