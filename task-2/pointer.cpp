#include <iostream>
using namespace std;

int main() {
    int num = 50;

    // Pointer storing address of num
    int *ptr = &num;

    cout << "Address of num: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    // Changing value using pointer
    *ptr = 100;

    cout << "New value of num: " << num << endl;

    return 0;
}
