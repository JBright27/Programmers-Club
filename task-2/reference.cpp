#include <iostream>
using namespace std;

int main() {
    int x = 25;

    // Reference variable
    int &ref = x;

    // Changing value using reference
    ref = 80;

    cout << "Value of x: " << x << endl;

    return 0;
}
