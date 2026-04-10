#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b)      { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) { cout << "Cannot divide by zero!" << endl; return 0; }
        return a / b;
    }
};

int main() {
    Calculator calc;
    cout << "Add: "      << calc.add(10, 5)      << endl;
    cout << "Subtract: " << calc.subtract(10, 5) << endl;
    cout << "Multiply: " << calc.multiply(10, 5) << endl;
    cout << "Divide: "   << calc.divide(10, 5)   << endl;
    return 0;
}
