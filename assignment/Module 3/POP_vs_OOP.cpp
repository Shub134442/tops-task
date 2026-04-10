#include <iostream>
using namespace std;

void calculateArea(int length, int width) {
    int area = length * width;
    cout << "Area (POP): " << area << endl;
}

int main_pop() {
    calculateArea(10, 5);
    return 0;
}

#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    int calculateArea() {
        return length * width;
    }
};

int main() {

    calculateArea(10, 5);

    Rectangle r;
    r.length = 10;
    r.width = 5;
    cout << "Area (OOP): " << r.calculateArea() << endl;
    return 0;
}
