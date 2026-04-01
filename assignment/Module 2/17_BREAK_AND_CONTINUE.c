#include <stdio.h>
int main() {
    int i;

    // break: stop at 5
    printf("Break at 5: ");
    for (i = 1; i <= 10; i++) {
        if (i == 5) break;
        printf("%d ", i);
    }
    printf("\n");

    // continue: skip 3
    printf("Skip 3: ");
    for (i = 1; i <= 10; i++) {
        if (i == 3) continue;
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
