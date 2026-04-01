#include <stdio.h>
int fib(int n) { return (n <= 1) ? n : fib(n-1) + fib(n-2); }
int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci: ");
    for (i = 0; i < n; i++) printf("%d ", fib(i));
    printf("\n");
    return 0;
}
