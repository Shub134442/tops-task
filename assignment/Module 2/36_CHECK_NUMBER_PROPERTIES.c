#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf(n % 2 == 0 ? "Even\n" : "Odd\n");
    if (n > 0)      printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else            printf("Zero\n");
    if (n % 3 == 0 && n % 5 == 0) printf("Multiple of both 3 and 5\n");
    else printf("Not a multiple of both 3 and 5\n");
    return 0;
}
