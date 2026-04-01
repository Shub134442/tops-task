#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, temp, digit, maxDigit = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = abs(n); // handle negatives
    while (temp != 0) {
        digit = temp % 10;
        if (digit > maxDigit) maxDigit = digit;
        temp /= 10;
    }
    printf("Max digit in %d is %d\n", n, maxDigit);
    return 0;
}
