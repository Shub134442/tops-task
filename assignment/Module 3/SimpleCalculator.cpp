#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) {
    if (b == 0) { cout << "Error: Division by zero!" << endl; return 0; }
    return (double)a / b;
}

int main() {
    int a, b;
    char op;
    cout << "Enter two numbers and operator (+, -, *, /): ";
    cin >> a >> b >> op;

    if (op == '+') cout << "Result: " << add(a, b) << endl;
    else if (op == '-') cout << "Result: " << subtract(a, b) << endl;
    else if (op == '*') cout << "Result: " << multiply(a, b) << endl;
    else if (op == '/') cout << "Result: " << divide(a, b) << endl;
    else cout << "Invalid operator!" << endl;
    return 0;
}
