#include <iostream>
using namespace std;

int globalVar = 100;

void showScope() {
    int localVar = 50;
    cout << "Inside function - Local: " << localVar << ", Global: " << globalVar << endl;
}

int main() {
    showScope();
    cout << "In main - Global: " << globalVar << endl;

    return 0;
}
