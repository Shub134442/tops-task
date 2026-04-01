#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using if-else
    int largest  = (a > b && a > c) ? a : (b > c ? b : c);
    int smallest = (a < b && a < c) ? a : (b < c ? b : c);
    printf("Largest: %d, Smallest: %d\n", largest, smallest);
    return 0;
}
