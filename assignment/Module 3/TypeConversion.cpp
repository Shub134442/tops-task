#include <iostream>
using namespace std;

int main() {

    int x = 10;
    double y = x;
    cout << "Implicit: int " << x << " -> double " << y << endl;

    double pi = 3.99;
    int piInt = (int)pi;
    cout << "Explicit: double " << pi << " -> int " << piInt << endl;
    return 0;
}
