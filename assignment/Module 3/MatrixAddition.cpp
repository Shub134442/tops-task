#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], result[2][2];

    cout << "Enter Matrix A (2x2):" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Enter Matrix B (2x2):" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];

    cout << "Result Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
