#include <stdio.h>
int main() {
    int i;

    // for loop
    printf("For loop: ");
    for (i = 1; i <= 10; i++) printf("%d ", i);
    printf("\n");

    // while loop
    printf("While loop: ");
    i = 1;
    while (i <= 10) { printf("%d ", i); i++; }
    printf("\n");

    // do-while loop
    printf("Do-While loop: ");
    i = 1;
    do { printf("%d ", i); i++; } while (i <= 10);
    printf("\n");

    return 0;
}
