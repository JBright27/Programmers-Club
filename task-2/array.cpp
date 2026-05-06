#include <iostream>
using namespace std;

// Function to print using normal for loop
void printWithForLoop(int arr[], int size) {
    cout << "Using normal for loop:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print using for-each loop
void printWithForEach(int arr[], int size) {
    cout << "Using for-each loop:" << endl;
    for(int value : arr) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printWithForLoop(arr, 5);
    printWithForEach(arr, 5);

    return 0;
}
