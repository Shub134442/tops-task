#include <stdio.h>
int isPalin(int n) {
    int temp = n, rev = 0, rem;
    while (temp != 0) { rem = temp % 10; rev = rev * 10 + rem; temp /= 10; }
    return rev == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf(isPalin(n) ? "%d is Palindrome\n" : "%d is NOT Palindrome\n", n);
    return 0;
}
