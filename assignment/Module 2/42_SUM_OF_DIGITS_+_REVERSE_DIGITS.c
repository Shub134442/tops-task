#include <stdio.h>
int main() {
    int n, temp, digit, sum = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum  += digit;
        rev   = rev * 10 + digit;
        temp /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", rev);
    return 0;
}
