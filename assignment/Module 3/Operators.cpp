#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Arithmetic: " << a+b << " " << a-b << " " << a*b << " " << a/b << " " << a%b << endl;

    cout << "Relational (a>b): " << (a > b) << ", (a==b): " << (a == b) << endl;

    cout << "Logical (a>5 && b<5): " << (a > 5 && b < 5) << endl;

    cout << "Bitwise AND: " << (a & b) << ", OR: " << (a | b) << endl;

    int max = (a > b) ? a : b;
    cout << "Max (ternary): " << max << endl;
    return 0;
}
