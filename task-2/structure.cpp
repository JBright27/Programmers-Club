#include <iostream>
using namespace std;

// Structure definition
struct Rectangle {
    int width;
    int breadth;
};

// Function to calculate area
int calculateArea(Rectangle r) {
    return r.width * r.breadth;
}

int main() {
    Rectangle r1;

    // Assign values
    r1.width = 10;
    r1.breadth = 5;

    cout << "Area of Rectangle: " << calculateArea(r1) << endl;

    return 0;
}
