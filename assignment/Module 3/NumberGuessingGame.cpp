#include <iostream>
using namespace std;

int main() {
    int secret = 42, guess, attempts = 0;

    cout << "Guess the number (1-100): " << endl;
    while (true) {
        cin >> guess;
        attempts++;
        if (guess < secret)
            cout << "Too low! Try again: ";
        else if (guess > secret)
            cout << "Too high! Try again: ";
        else {
            cout << "Correct! Attempts: " << attempts << endl;
            break;
        }
    }
    return 0;
}
