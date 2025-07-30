#include <iostream>
using namespace std;

class Calculator {
public:
    // Function with 2 int parameters
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function with 3 int parameters
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function with float parameters
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 and 3: " << calc.add(2, 3) << endl;
    cout << "Sum of 1, 2, and 3: " << calc.add(1, 2, 3) << endl;
    cout << "Sum of 1.5 and 2.5: " << calc.add(1.5f, 2.5f) << endl;

    return 0;
}
