#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, rev;
    cout << "Enter a string: ";
    cin >> str;
    rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is NOT a Palindrome." << endl;
    return 0;
}
