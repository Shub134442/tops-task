#include <stdio.h>
int main() {
    int mat[3][3], i, j, sum = 0;
    printf("Enter 3x3 matrix elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) scanf("%d", &mat[i][j]);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) { printf("%d ", mat[i][j]); sum += mat[i][j]; }
        printf("\n");
    }
    printf("Sum of all elements: %d\n", sum);
    return 0;
}
