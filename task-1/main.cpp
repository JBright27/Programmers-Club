#include <iostream>
using namespace std;

// Namespace for int sum
namespace intSum {
    int sum(int a, int b) {
        return a + b;
    }
}

// Namespace for long sum
namespace longSum {
    long sum(long a, long b) {
        return a + b;
    }
}

int main() {
    // Question 2 demonstration
    int result1 = intSum::sum(5, 10);
    long result2 = longSum::sum(100000L, 200000L);

    cout << "Sum (int): " << result1 << endl;
    cout << "Sum (long): " << result2 << endl;

    // Question 3 demonstration
    unsigned int x = 0;
    x = x - 1;
    cout << "Unsigned underflow result: " << x << endl;

    return 0;
}
