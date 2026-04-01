#include <stdio.h>
long long factRec(int n) {
    return (n <= 1) ? 1 : n * factRec(n - 1);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Factorial (recursive) = %lld\n", factRec(n));
    return 0;
}
